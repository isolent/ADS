#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n; 
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int x; cin >> x;
    vector <int> v;
    for (int i = 0; i < n; i++){
        if (a[i] == x) v.push_back(i + 1); 
    }
    for (int j = 0; j < v.size(); j++){
        cout << v[j] << " "; 
    }
}
// #include <bits/stdc++.h>
// using namespace std;

// void binSearch(int a[], int l, int r, int x){
//     vector <int> v;
//     while (l <= r) {
//         int mid = l+ ((r-l)/2);
//         while (a[mid] == x){ 
//             v.push_back(mid+1);
//         } 
//         if (a[mid] < x) {
//             return binSearch(a, mid + 1, r, x);
//         }
//         else return binSearch(a, l, mid - 1, x); 
//     }
//     for (int i = 0; i < v.size(); i++){
//         cout << v[i] << " ";
//     }
// }

// int main() {
//     int n; cin >> n;
//     int a[n];
//     for (int i = 0; i < n; i++){
//         cin >> a[i];
//     }
//     int x; cin >> x;
//     binSearch(a, 0, n - 1, x); 
// }