#include <bits/stdc++.h>
using namespace std;
struct Node{
  int val;
  int cnt;
  Node *left;
  Node *right;
  Node(int val){
    this->val = val;
    cnt = 1;
    left = right = nullptr;
  }
};

class BST{
private:
   Node * root;

   Node * push(Node *cur, int val){
      if(cur == nullptr) {
          Node *newNode = new Node(val);
          return newNode;
      }

      if (cur->val = val){
        cur->cnt++;
      }

      if (val < cur->val) cur->left = push(cur->left, val);
      if (val > cur->val) cur->right = push(cur->right, val);
      
      return cur;
   }  

   void print_cnt(Node *cur, int val){
      if(cur == nullptr) return;
      
      if (cur->val == val) {
        cout << cur->cnt << endl;
        return;
      }
      
        if (cur->val > val){
            print_cnt(cur->left, val);
        }

        if(cur->val < val){
            print_cnt(cur->right, val);
        }
    }   

    void del(Node *cur, int val){
        if (cur == nullptr) return;
        
        if(cur->val == val) {
          if(cur->cnt > 0) cur->cnt--;
          return;
        }

        if(cur->val > val) del(cur->left, val);
        if(cur->val < val) del(cur->right, val);
    }

public:
    BST(){
        root = nullptr;    
    }        

    void push(int val){
        root = push(root, val);
    }

    void print_cnt(int val){
        print_cnt(root, val);
    }

    int del(int val){
        del(root, val);
    }
};

int main(){
    BST bst;
    int n; cin >> n;
    while (n--) {
        string s; cin >> s;
        if (s == "insert"){
            int x; cin >> x;
            bst.push(x);
        }
        if(s == "cnt"){
          int x; cin >> x;
          bst.print_cnt(x);
        }

        if(s == "delete"){
            int x; cin >> x;
            bst.del(x);
        }
    }
}