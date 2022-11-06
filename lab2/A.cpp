#include <bits/stdc++.h>
using namespace std;
struct Node{
    int val;
    Node* next;
    Node* prev;
    Node (int x) {
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

    void push(int val){
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

    void findNearest(int k){
        vector <int> v;
        Node * cur = head;
        int mn = 99999;
        int ind = -1;
        while (cur != nullptr){
            v.push_back(abs(k-(cur->val)));
            cur = cur -> next;
        }
        for (int i = 0; i < v.size(); ++i){
            if (v[i] < mn){
                mn = v[i];
                ind = i;
            }
        }
        cout << ind;
    }
};

int main() {
    LinkedList list;
    int n; cin >> n;
    for (int i = 0; i < n; ++i){
        int x; cin>>x; 
        list.push(x);
    }
    int k; cin >> k;
    list.findNearest(k);
}