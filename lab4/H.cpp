#include <bits/stdc++.h>
using namespace std;

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
private:
    vector<int> res;
    int curSum = 0;
    Node * root;
    Node * push(Node * cur, int val){
        if (cur == nullptr) {
            return new Node(val);
        } 

        if (val < cur->val) {
            cur->left = push(cur->left, val);
        }
        if (val > cur->val) {
            cur->right = push(cur->right, val);
        }
        return cur;
    }

    void getSum(Node * cur){
        if (cur == nullptr){
            return ;
        }
        getSum(cur->right);
        curSum += cur->val;
        res.push_back(curSum);
        getSum(cur->left);
    }
public:
    BST(){
        root = nullptr;
    }

    void push(int val){
        root = push(root, val);
    }

    vector <int> getSum(){
        getSum(root);
        return res;
    }
};

int main (){
    BST tree;
    int n; cin >> n;
    for (int i = 0; i < n; ++i){
        int x; cin >> x;
        tree.push(x);
    }

    vector <int> res = tree.getSum();
    for (int i : res){
        cout << i << " ";
    }
    return 0;
}

