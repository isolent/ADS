#include <bits/stdc++.h>
using namespace std;

struct Node {
    string val; 
    Node * next;
    Node * prev;
    Node (string s) {
        this->val = s;
        this->next = nullptr;
        this->prev = nullptr;
    }
};

struct LinkedList{
private:
    Node * head = nullptr;
    Node * tail = nullptr;

public:
    void push(string val){
        Node * newNode = new Node(val);
        if (tail == nullptr){
            tail = head = newNode;
        } else {
            if (tail->val == val){
                tail == nullptr;
            } else{
                tail -> next = newNode;
                newNode -> prev = tail;
                tail = newNode;
            }
        }
    }
   
    void print(){
        vector <string> v;
        Node * cur = head;
        while (cur != nullptr){
            v.push_back(cur->val);
            cur = cur->next;
        }
        reverse (v.begin(), v.end());
        cout << "All in all: " << v.size() << endl;
        cout << "Students: "<< endl; 
        for (int i = 0; i < v.size(); i++){
            cout << v[i] << endl;
        }
    }
};

int main (){
    LinkedList list;
    int n; cin >> n;
    for (int i = 0; i < n; i++){
        string s; cin >> s;
        if (s != "" and s != " "){
            list.push(s);
        }
    }
    list.print();
}