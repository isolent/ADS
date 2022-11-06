#include <bits/stdc++.h>
using namespace std;

struct Node{
    int val;
    Node * next;
    Node * prev;

    Node(int val){
        this->val = val;
        next = nullptr; 
        prev = nullptr;
    }
};

bool ok = true;

class LinkedList{
public:
    Node * head;
    Node * tail;
    int size;

    LinkedList(){
        head = nullptr;
        tail = nullptr;
    }

    void add (int val){
        Node * newNode = new Node(val);
        if (tail == nullptr){
            tail = head = newNode;
        } else {
            tail -> next = newNode;
            newNode -> prev = tail;
            tail = newNode;
        }
    }
    void add_back (int val){
        Node * newNode = new Node(val);
        if (tail == nullptr){
            tail = head = newNode;
        } else {
            tail -> next = newNode;
            newNode -> prev = tail;
            tail = newNode;
        }
    }
    void print(){
        Node * cur = tail ;
        while(cur != head){
            cout << cur->val << " ";
        }
        cur = cur->prev;
    }
};

int main () {
    LinkedList list;
    int n; cin >> n;
    int x;
    while (n--){
        cin >> x;
        if (x == 1) {
            int a; cin >> a;
            list.add(a);
        } else if (x == 2){
            ok == false;
        }
        // if (x == 1 and ok == false) {
        //     int a; cin>> a;
        //     list.add_back(a);
        // }
    }
    list.print();
}