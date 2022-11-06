#include <bits/stdc++.h>
using namespace std;

struct Node{
    int val;
    Node * next;
    Node(int val){
        this->val = val;
        next = nullptr;
    }
};

class LinkedList{
    Node * head;
    int size;
public:
    LinkedList(){
        head = nullptr;
        size = 0;
    }

    void pushback(int val){
        Node * newNode = new Node(val);
        if (head == nullptr){
            head = newNode;
        } else {
            Node * cur = head;
            while (cur != nullptr){
                if (cur->next = nullptr){
                    cur->next = newNode; 
                    break;
                }
                cur = cur->next;
            }
        }
        size++;
    }

    void pushfront(int val){
        Node * newNode = new Node(val);

    }
};