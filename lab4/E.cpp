#include <bits/stdc++.h>
using namespace std;

int res = 0;
vector <int> v(104, 0);

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
    Node * root ;

public :
    BST(){
        root = new Node(1);  
    }
    
    void find(int parent, Node * cur, Node * &target, int level){
        if (cur and !target){
            if(cur->val == parent){
              target = cur;
              v[level]++;
              res = max(res, v[level]);
              return;
            }
            find (parent, cur->right, target, level + 1);
            find (parent, cur->left, target, level + 1);
        }
    }

    void push(int parent, int k, int newVal){
        Node * target = nullptr;
        find(parent, root, target, 0);
        if (k) target->right = new Node(newVal);
        else target->left = new Node (newVal);
    }
};

int main(){
    int n; cin >> n; 
    BST tree;
    for (int i = 1; i < n; ++i){
        int parent, newval, k;
        cin >> parent >> newval >> k;
        tree.push(parent, k, newval);  
    }

    cout << res << endl;
}