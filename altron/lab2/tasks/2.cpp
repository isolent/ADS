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

    void reverse(){
        vector <int> rave;
        Node * cur = head;
        while(cur != nullptr){
            rave.push_back(cur -> val);
            cur = cur -> next;
        }
        for (int i = 0; i < rave.size(); i++){
            cout <<  rave[i] << " ";
        }
        cur = head;
        int i = rave.size()-1;
        while(cur != nullptr){
            cur -> val = rave[i];
            cur = cur -> next;
            i--;
        }
    }

    void reversePro(){
        Node * next = nullptr;
        Node * prev = nullptr;
        Node * cur = head;
        while(cur!=nullptr){
            next = cur -> next;
            cur -> next = prev;
            prev = cur ;
            cur = next;
        }
        head = prev;
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
   list.reversePro();
   cout << endl;

   list.print();
}