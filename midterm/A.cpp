#include <bits/stdc++.h>
using namespace std;
struct Node{
    int val;
    Node* right;
    Node* left;

    Node(int val){
        this->val=val;
        right = left = nullptr;
    }
};
int a[100005];
class BST{
private:
    Node* root;

    Node* push(Node* cur, int val){
        if(cur == nullptr){
            return new Node(val);
        } 
        if(val < cur->val) cur->left = push(cur->left, val);
        if(val > cur->val) cur->right = push(cur->right, val);
        return cur;
    }

    int toLeft(Node* cur){
        if(cur == nullptr) return 0;
        return toLeft(cur->left) + 1;
    }

    int toRight(Node* cur){
        if(cur == nullptr) return 0;
        return toRight(cur->right) + 1;
    }

    void count(Node* cur){
        if(cur == nullptr) return;
        int l = toLeft(cur->left);
        int r = toRight(cur->right);
        int cnt = min(l, r);
        for(int i = 1; i <= cnt; ++i){
            ++a[i];
        }
        count(cur->left);
        count(cur->right);
    }

    void print(Node* cur){
        if(cur != nullptr){
            print(cur->left);
            cout << cur->val << " ";
            print(cur->right);
        }
    }

public:
    BST(){
        root = nullptr;
    }

    void push(int val){
        root = push(root, val);
    }

    void count(){
        count(root);
    }

    void print(){
        print(root);
    }
};

int main(){

    BST tree;
    int n; cin >> n;
    
    for(int i = 0; i < n; ++i){
        int x; cin >> x;
        tree.push(x);
    }

    tree.count();

    for(int i = 1; i < n; ++i){
        cout << a[i] << " ";
    }
}