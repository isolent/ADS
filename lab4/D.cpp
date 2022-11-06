#include <bits/stdc++.h>
using namespace std;
struct Node{
    int val;
    Node *left;
    Node *right;
    Node(int val){
        this->val = val;
        left = right = nullptr;
    }
};
map <int, int> levelSum;
class BST{
private:
    Node *root;
    
    Node *push(Node *cur, int val){
        if (cur == nullptr) return new Node(val);
        if (val < cur->val) cur->left = push(cur->left, val);
        if (val > cur->val) cur->right = push(cur->right, val);
        return cur;
    }

    void getLevelSum(Node *cur, int level){
        if (!cur) return;
        levelSum[level] += cur->val;
        getLevelSum(cur->right, level+1);
        getLevelSum(cur->left, level+1);
    }
public:
    BST(){
        root = nullptr;
    }
    void push(int val){
        root = push(root, val);
    }

    vector <int> getLevelSum(){
        getLevelSum(root, 0);
        vector <int> res;
        map <int,int> :: iterator it;
        for(it = levelSum.begin(); it != levelSum.end(); it++){
            res.push_back(it->second);
        }
        return res;
    }
};

int main(){
    BST bst;
    int n; cin >> n;
    for (int i = 0; i < n; i++){
        int x; cin >> x;
        bst.push(x);
    }

    vector <int> levels = bst.getLevelSum();
    cout << levels.size() << endl;
    for (int i = 0; i < levels.size(); i++){
        cout << levels[i] << " ";
    }
    return 0;
}