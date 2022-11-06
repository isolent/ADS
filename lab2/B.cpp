#include <bits/stdc++.h>
using namespace std;
struct Node{
    string val;
    Node* next;
    Node* prev;
    Node (string x) {
        this->val = x;
        this->next = nullptr;
        this->prev = nullptr;
    }
};

struct LinkedList{
private:
    Node* head = nullptr;
    Node* tail = nullptr;

public:

    void push(string val){
        Node * newNode = new Node(val);
        if (head == nullptr){
            head = tail = newNode;
        }
        else{
            tail -> next = newNode;
            newNode -> prev = tail;
            tail = newNode;
        }
    }

    void rotate(int n){
        int cnt = 0;
        if (n == 0) {
            return;
        }
        Node * cur = head;
        while(cnt != n and tail != nullptr){
            cnt++;
            tail->next = head;
            tail = head;
            head = head->next;
            tail->next = nullptr;
        }  
    }

    void print(){
    Node * cur = head;
    while(cur != nullptr){
            cout << cur -> val << " " ; 
            cur = cur->next;
        }
    }

};

int main() {
    LinkedList list;
    int n; cin >> n;
    int k; cin >> k;
    for (int i = 0; i < n; i++){
        string s; cin >> s;
        list.push(s);
    }  

    list.rotate(k);
    list.print();
}