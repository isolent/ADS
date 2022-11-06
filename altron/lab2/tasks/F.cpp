#include <iostream>
using namespace std;

int size = 0;

struct Node{
    string val;
    Node* next;
    Node* prev;
    Node(string val){
        this -> val = val;
        next = nullptr;
        prev = nullptr;
    }
};

class LinkedList{
    Node* head;
    Node* tail;

public:
    LinkedList(){
        head = nullptr;
        tail = nullptr;
    }

    void push(string val, int pos){
        Node* newNode = new Node(val);
        if(head == nullptr){
            head = tail = newNode;
        } else {
            Node* cur = head;
            while(pos > 0){
                cur = cur -> next;
                pos--;
            }
            if(cur == nullptr){
                tail -> next = newNode;
                newNode -> prev = tail;
                tail = newNode;
            }else if(cur -> prev != nullptr && cur -> next == nullptr){
                cur -> prev -> next = newNode;
                newNode -> prev = cur -> prev;
                newNode -> next = cur;
                cur -> prev = newNode;
            }else{
                newNode -> next = head;
                head -> prev = newNode;
                head = newNode;
            }
        }
    }

    void pop(int pos){
        Node* cur = head;
        while(pos > 0){
            cur = cur -> next;
            pos--;
        }
        if(cur -> prev && cur -> next){
            cur -> prev -> next = cur -> next;
            cur -> next -> prev = cur -> prev;
        } else if (cur -> prev == nullptr && cur -> next == nullptr){
            head = tail = nullptr;
        } else if(cur -> next == nullptr && cur -> prev != nullptr){
            cur -> prev -> next = nullptr;
            tail = cur -> prev;
        } else {
            cur -> next -> prev = nullptr;
            head = cur -> next;
        }
    }

    void replace(string val, int pos){
        Node* cur = head;
        while(pos > 0){
            cur = cur -> next;
            pos--;
        }
        cur -> val = val;
    }

    void print(){
        Node* cur = head;
        while(cur != nullptr){
            cout << cur -> val << endl;
            cur = cur -> next;
        }
    }
};

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    LinkedList list;
    char c;
    int a;
    string s;
    while(cin >> c >> a){
        getline(cin, s);
        s.erase(0, 1);
        if(c == '+'){
            if(size - a > 1){
                cout << "ERROR" << endl;
                return 0;
            }
            list.push(s, a);
            size++;
        } else if(c == '-'){
            if(a > size || size == 0){
                cout << "ERROR" << endl;
                return 0;
            }
            list.pop(a);
            size--;
        } else if(c == '*'){
            if(a > size || size == 0){
                cout << "ERROR" << endl;
                return 0;
            }
            list.replace(s, a);
        }
    }
    if(size == 0){
        cout << "EMPTY" << endl;
    } else {
        list.print();
    }
}