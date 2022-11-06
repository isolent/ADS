#include <bits/stdc++.h>
using namespace std;
// Node характеризует отдельно взятый элемент
// all Nodes == LinkedList
struct Node{
    int val;
    int index;
    int pos = 0;
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
    bool hasCycle(int pos) {
            Node * head = nullptr;
            Node * fast = head;
            Node * slow = head;
            while (fast != nullptr && fast -> next != nullptr){
                slow = slow->next;
                fast = fast->next->next;
                if(slow == fast) return true;
            }
            return false;
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
   int pos;
   cin >> pos;
   list.hasCycle(pos);
   
}