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

    int sizeOfNode(Node *node, int x, bool used) {
        if(node == nullptr)
            return 0;
        if(node->val == x)
            used = true;
        return used + sizeOfNode(node->right, x, used) + sizeOfNode(node->left, x, used);
    }
public:
    BST(){
        root = nullptr;
    }    

    void push(int val){
       root = push(root, val);
    }

    

    int sizeOfNode(int x){
        return sizeOfNode(root, x, false);
    }
};

int main() {
    BST tree;
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int c; cin >> c;
        tree.push(c);
    }
    int x; cin >> x;
    cout << tree.sizeOfNode(x);
}