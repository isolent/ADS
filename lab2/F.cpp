#include <bits/stdc++.h>
using namespace std;

struct Node{
    int val;
    int index;
    Node * next;
    Node * prev;
    
    Node(int val){
        this -> val = val;
        next = nullptr;
        prev = nullptr;
    }
};

class LinkedList{
    Node * head;
public:
    LinkedList(){
        head = nullptr;
    } 

    void push(int val){
        Node * newNode = new Node(val);
        if (head == nullptr){
            head = newNode;
        } else {
            Node * cur = head;
            while (cur != nullptr){
                if (cur -> next == nullptr){
                    cur -> next = newNode;
                    break;
                }
                cur = cur -> next;
            } 
        }
    }
    void add (int pos, int val){
        if(pos == 0){
        Node * newNode = new Node(val);
            newNode -> next = head;
            head -> prev = newNode;
            head = newNode;
        }
        Node * newNode = new Node(val);
        if (head == nullptr){
            head = newNode;
        } else {
            Node * cur = head;
            int i = 1;
            while (cur != nullptr){
                if (i == pos){
                    newNode -> next = cur -> next;
                    cur -> next = newNode;
                    break;
                }
                cur = cur -> next;
                i++;
            }
        }
    }
    void print(){
    Node * cur = head;
    while(cur != nullptr){
        cout << cur -> val << " ";
        cur = cur->next;
        }
    }
};

int main () {
    LinkedList list;
    int n; cin >> n;
    for (int i = 0; i < n; i++){
        int x; cin >> x;
        list.push(x);
    }
    int a; cin >> a;
    int pos; cin >> pos;
    list.add(pos, a);
    list.print();
}