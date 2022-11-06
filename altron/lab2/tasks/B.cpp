#include <bits/stdc++.h>
using namespace std;

struct Node{
    string val;
    int index;
    string s;
    int cnt;
    Node * next;

    Node(string v){
        val = v;
        cnt = 1;
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

    void push(string val){
        Node *newNode= new Node(val);
        if(head == nullptr){
            head = newNode;
        }
        else {
            Node * cur = head;
            while (cur != nullptr){
                if(cur->val == val){
                    cur->cnt++;
                    break;
                }
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
                    swap(first->cnt, second->cnt);
                }
                if (first -> cnt < second->cnt){
                    swap(first->cnt, second->cnt);
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
        cout << cur -> val << " " << cur->cnt << endl; 
        cur = cur->next;
        }
    }
};

int main(){
    // freopen("C:/Users/user/KBTU/.ads/altron/lab2/tasks/input1.txt", "r", stdin);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    LinkedList list;
    string s;
    while(cin >> s){
        list.push(s);
    }
    list.sort();
    list.print();

}