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

    Node * postOrder(Node * cur){
        if (cur != nullptr){
            postOrder(cur->right);
            cout << cur->val << ' ';
            postOrder(cur->left);
       }
    }

    int height(Node * cur){
        if (cur == nullptr){
            return 0;
        } 
        return max(height(cur->left), height(cur->right)) + 1;
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

    void postOrder(){
        postOrder(root);
    }

    int height(){
        return height(root);
    }
};

int main() {
    BST tree;
    int x; 
    while (cin >> x and x != 0){
        tree.push(x);
    }
    cout << tree.height();
}