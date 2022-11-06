#include <iostream>
using namespace std;

struct node{
    int val;
    node* left;
    node* right;
    node(int val){
        this->val = val;
        right = NULL;
        left = NULL;
    }
};

int arr[100000], j =0;
bool ok = false;
struct bst{
    node* root;

    bst(){
        root = NULL;
    }

    node* insert(node* root ,int val){
        if(root == NULL) return new node(val);
        if(root->val > val) root->left = insert(root->left, val);
        if(root->val < val) root->right = insert(root->right, val);
        return root;
    }
    void insert(int val){
        root = insert(root, val);
    }
    void inOrder(node* root){
        if(root == NULL) return;
        inOrder(root->left);
        cout << root->val << endl;
        inOrder(root->right);
    }
    void postOrder(node* root){
        if(root == NULL) return;
        postOrder(root->right);
        cout << root->val << ' ';
        postOrder(root->left);
    }
    void inOrder(){
        inOrder(root);
        cout << endl;
    }
    void postOrder(){
        postOrder(root);
        cout << endl;
    }


    void triangle(node * cur){
        if (cur == nullptr) return;
        int L = toLeft(cur -> left);
        int R = toRight(cur -> right);
        int cnt = min(L, R);
        for (int i = 1; i <= cnt; i ++){
            arr[i]++;
        }
        triangle(cur -> left);
        triangle(cur -> right);
    }

    int toLeft(node * cur){
        if (cur == nullptr) return 0;
        return toLeft(cur -> left) + 1;
    }

    int toRight(node * cur){
        if (cur == nullptr) return 0;
        return toRight(cur -> right) + 1;
    }
};

int main(){
    bst zxc;
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        zxc.insert(x);
    }
    zxc.triangle(zxc.root);
    for (int i = 1; i < n; i ++){
        cout << arr[i] << " ";
    }
    return 0;
}