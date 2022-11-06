#include <bits/stdc++.h>
using namespace std;

int res = 0;
vector <int> v(104, 0);

struct Node{
    int val;
    Node * left;
    Node * right;
    Node(int val){
        this->val = val;
        left = right = nullptr;
    }
};

class BST{
    Node * root;
public:
    BST(){
        root = new Node(1);
    }

    void find(int parent, Node * cur, Node * &target, int lvl){
        if (cur and !target) {
            if (cur->val == parent) {
                target = cur;
                v[lvl]++;
                res = max(res, v[lvl]);
                return;
            }
            find(parent, cur->right, target, lvl+1);
            find(parent, cur->left, target, lvl+1);
        }
    }
    void push(int parent, int k, int newVal){
        Node * target = nullptr;
        find (parent, root, target, 0);
        if (k) target->right = new Node(newVal);
        else target->left = new Node(newVal);
    }
};

int main(){
    int n; cin >> n;
    BST tree;
    for(int i = 1; i < n; i++){
        int parent, newVal, k;
        cin >> parent>> newVal >> k;
        tree.push(parent, newVal, k);
    }
    cout << res << endl;
}