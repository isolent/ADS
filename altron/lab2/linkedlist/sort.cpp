#include <bits/stdc++.h>
using namespace std;
// Node характеризует отдельно взятый элемент
// all Nodes == LinkedList
struct Node{
    int val;
    int index;
    Node * next;

    Node(int val){
        this -> val = val;
        next = nullptr;
    }
};

class LinkedList{
    Node * head;
public:
    LinkedList(){
        head = nullptr;
    }

    void pushback(int val){
        Node *newNode= new Node(val);
        if(head == nullptr){
            head = newNode;
        }
        else {
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

    void sort(){
        Node * first = head;
        Node * second = nullptr;

        while(first -> next != nullptr){
            second = first -> next;
            while (second != nullptr){
                if (first -> val > second->val){
                    swap(first->val, second->val);
                }
                second = second->next;
            }
            first = first -> next ;
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

int main(){
   LinkedList list;
   int n;
   cin >> n;
   for(int i = 0; i < n; i++){
       int x; cin >> x;
       list.pushback(x);
   }
   list.sort();
   list.print();
}