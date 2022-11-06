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
    int size;
public:
    LinkedList(){
        head = nullptr;
        size = 0;
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
        size++;
    }
    void del(int val){
        if (head == nullptr){
            cout << "LinkedList is empty";
            return;
        }
        if(head->val == val){
            head = head->next;
            return;
        }
        else{
            Node * cur = head;
            Node * prev = nullptr;
            while(cur != nullptr){
                if(cur->val == val){
                    prev -> next = cur -> next;
                    delete cur;
                    return;
                }
                prev = cur;
                cur = cur->next;
            }
            cout << "No such element";
        }

    }
    void delPos(int pos){
        if(head == nullptr){
            cout << "LinkedList is empty";
            return;
        }
        if (pos <= 0){
            cout << "No such pose";
            return;
        }
        if (pos == 1){
            head = head -> next;
        }
        else{
            int i = 1;
            Node * cur = head;
            Node * prev = nullptr;
            while(cur != nullptr){
                if(i == pos){
                    prev -> next = cur -> next;
                    delete cur;
                    return;
                }
                prev = cur;
                cur = cur->next;
                i++;
            }
            cout << "No such pos" << endl;
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
    list.pushback(5);
    list.pushback(6);
    list.pushback(8);
    list.pushback(5);
    list.pushback(7);
    list.print();
    cout << endl;
    list.delPos(3);
    list.print();
    cout << endl;
    list.del(15);
    cout << endl;
    list.print();
}


