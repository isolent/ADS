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

    int getLength(Node * head){
        int ans = 0;
        Node * p = head;
        while(p != nullptr){
            p = p -> next;
            ans++;
        }
        return ans;
    }

    void middle(){
        Node * p = head;
        int len = getLength(head);
        for(int i = 0; i < len/2; i++){
            p = p -> next;
        }
        cout << p;
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
   list.middle();
   
}