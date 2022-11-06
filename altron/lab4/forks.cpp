#include <bits/stdc++.h>
using namespace std;

struct Node {
    int val;
    Node * left;
    Node * right;
    Node(int val){
        this->val = val;
        left = right = nullptr;
    }
};
int cnt = 0;
class BST{
private:
    Node * root;
    Node * push(Node * cur, int val){
        if(cur == nullptr){
            return new Node(val);
        }
        if (val < cur->val) cur->left = push(cur->left, val);
        if (val > cur->val) cur->right = push(cur->right, val);
        return cur;
    }

    Node * inOrder(Node * cur){
        if(cur != nullptr){
            inOrder(cur->left);
            cout << cur->val << ' ';
            inOrder(cur->right);

        }
    }
    Node * printForks(Node * cur){
        if (cur != nullptr){
            printForks(cur->left);
            if(cur->left != nullptr and cur->right != nullptr){
                cout << cur->val << " ";
            }
            printForks(cur->right);
        }
    }
    
public:
    BST(){
        root = nullptr;
    }    

    void push(int val){
       root = push(root, val);
    }

    void inOrder(){
        inOrder(root);
    }
    
    void printForks(){
        printForks(root);
    }
   
};

int main() {
    BST tree;
    int x;
    while (cin >> x and x != 0){
        tree.push(x);
    }
    tree.printForks();
}