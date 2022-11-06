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
        if (!cur) return new Node(val);
        if (val < cur->val) cur->left = push(cur->left, val);
        if (val > cur->val) cur->right = push(cur->right, val);
        return cur;
    }

    Node * printFork(Node * cur){
        if (cur) {
            printFork(cur->left);
            if (cur->left != nullptr and cur->right != nullptr){
                cnt++;
            }
            printFork(cur->right);
        }
    }
public:
    BST(){
        root = nullptr;
    }

    void push(int val){
        root = push(root, val);
    }

    void printFork(){
        printFork(root);
    }
};

int main() {
    BST tree;
    int n; cin >> n;
    for (int i = 0; i < n; ++i){
        int x; cin >> x;
        tree.push(x);
    }
    tree.printFork();
    cout << cnt ;
}