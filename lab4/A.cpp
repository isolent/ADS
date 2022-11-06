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

    bool hasPath(string &s, Node * cur, int pos){
        if (cur == nullptr) return false;
        if (pos == s.size()) return true;
        if (s[pos] == 'L') return hasPath(s, cur->left, pos+1);
        return hasPath(s, cur->right, pos + 1);
    }

    
public:
    BST(){
        root = nullptr;
    }    

    void push(int val){
       root = push(root, val);
    }

    bool hasPath(string &s){
        return hasPath(s, root, 0);
    }
};

int main() {
    BST tree;
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++){
        int x; cin >> x;
        tree.push(x);
    }
    
    for (int i = 0; i < m; i++){
        string s;
        cin >> s;
        if (tree.hasPath(s) == true) cout << "YES";
        else cout << "NO";
    }
    return 0;
}