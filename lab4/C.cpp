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
    void showNode(Node *cur, int x, bool used){
        if (cur == nullptr) return;
        if (cur->val == x) used = true;
        if (used) cout << cur->val << " ";
        showNode(cur->left, x, used);
        showNode(cur->right, x, used);
    }

public:
    BST(){
        root = nullptr;
    }    

    void push(int val){
       root = push(root, val);
    }

    void showNode(int x){
        showNode(root, x, false);
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
    tree.showNode(x);
}