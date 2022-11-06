#include <bits/stdc++.h>
using namespace std;

struct Node{
    int val;
    Node * left;
    Node * right;
    Node (int val) {
        this->val = val;
        left = right = nullptr;
    }
};

int cnt = 0;

class BST{
    Node * root;
    Node * push(Node * cur, int val, int l){
        if(!cur){
            cnt += val - l;
            return new Node(val);
        } 
        if (cur -> val < val) cur -> right = push(cur -> right, val, l + 1);
        if (cur -> val > val) cur -> left = push(cur -> left, val, l + 1);
        return cur;
    }
    
    void inOrder(Node * cur) {
        if (cur != nullptr){
            if(cur->right == nullptr && cur->left == nullptr){
                cnt += 1;
                inOrder(cur->left);
                inOrder(cur->right);
            }
        }
    }

public:
    BST () {
        root = nullptr;
    }

    void push(int val){
        root = push(root, val, 0);
    }

    void inOrder(){
        inOrder(root);
    }
};

int main(){
    BST bst;
    int n; cin >> n;
    for (int i = 0; i < n; ++i){
        int x; cin >> x; 
        bst.push(x);
    }
    cout << cnt << endl;
}