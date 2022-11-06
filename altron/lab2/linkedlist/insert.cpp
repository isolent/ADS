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

    void pushfront(int val){
        Node * newNode = new Node(val);
        newNode -> next = head;
        head = newNode;
        size++;
    }

    void add(int pos, int val){
        if (pos > size){
            cout << "Can't add";
            return;
        }
        Node * newNode = new Node(val);
        if (head == nullptr){
            head = newNode;
        }
        else{
            Node * cur = head;
            int i = 1;
            while(cur != nullptr){
                if (i == pos){
                    newNode -> next = cur -> next;
                    cur -> next = newNode;
                    break;
                }
                cur = cur -> next;
                i++;
            }
        }
        size++;
    }
    void insert(int pos, int val){
        if (pos > size){
            cout << "Can't insert";
            return;
        }
        Node * cur = head;
        int i = 1;
        while(cur != nullptr){
            if (i == pos){
                cur -> val = val;
                break;
            }
            cur = cur -> next;
            i++;
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
    list.pushback(1);
    list.pushback(2);
    list.pushback(3);
    list.pushback(4);
    list.pushback(5);
    list.print();
    cout << endl;
    list.pushfront(10);
    list.print();
    cout << endl;
    list.add(2, 5);
    list.print();
    cout << endl;
    list.insert(2, 100);
    list.print();   
}


