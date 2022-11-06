
// #include <bits/stdc++.h>
// using namespace std;

// struct Node{
//     int val;
//     Node * next;
//     Node * prev;

//     Node(int val){
//         this->val = val;
//         next = nullptr; 
//         prev = nullptr;
//     }
// };


// class LinkedList{
// public:
//     Node * head;
//     Node * tail;
//     int size;

//     LinkedList(){
//         head = nullptr;
//         tail = nullptr;
//     }

//     void add (int val){
//         Node * newNode = new Node(val);
//         if (tail == nullptr){
//             tail = head = newNode;
//         } else {
//             tail -> next = newNode;
//             newNode -> prev = tail;
//             tail = newNode;
//         }
//     }

//     void del(){
//         if (tail != nullptr){
//             tail = tail -> prev;
//             if (tail == nullptr) {
//                 head = nullptr;
//             } else {
//                 tail -> next = nullptr;
//             }
//         } else {
//             head = nullptr;
//             cout << "error" << endl;
//         }
//     }
    
//     void getCur(){
//         if (tail == nullptr) cout << "error" << endl;
//         else if (tail != nullptr){
//             cout << tail-> val << endl;
//         }
//     }
    
//     void getMax(){
//         Node* cur = head;
//         if (cur == nullptr) cout << "error" << endl;
//         else {
//             int mx = 0;
//             while(cur != nullptr){
//                 if(cur->val > mx){
//                     mx = cur->val;
//                 }
//                 cur = cur->next;
//             }
//             cout << mx << endl;
//         }
//     }

// };

// int main () {
//     LinkedList list;
//     int n; cin >> n;
//     string s; 
//     while (n--){
//         cin >> s;
//         if (s == "add"){
//             int x; cin >> x;
//             list.add(x);
//         } else if (s == "delete"){
//             list.del();
//         } else if (s == "getmax"){
//             list.getMax();
//         } else if (s == "getcur"){
//             list.getCur();
//         }
//     }
// }