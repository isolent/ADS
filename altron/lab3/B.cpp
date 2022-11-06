#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int mx = -2000000000;
    for (int i = 0; i != n; i++){
        int x; cin >> x;
        if (x > mx){
            mx = x;
        }
    }
    cout << mx << endl;
}

// #include <bits/stdc++.h>
// using namespace std;

// long long binSearch (long long a[], long long l, long long r){
//     long long mx = -1;
//     while (l <= r){
//     long long mid = l + ((r-l)/2);

//     if (a[mid] > a[mid - 1] and a[mid] > a[mid + 1]){
//         mx = a[mid];
//         return mx;
//     }

//     else if (a[mid] < a[mid + 1])
//         return binSearch(a, mid + 1, r);

//     else return binSearch(a, l, mid - 1);
//     }
// }

// int main() {
//     long long n;
//     cin >> n;
//     long long a[n];

//     for (long long i = 0; i < n; ++i){
//         cin >> a[i];
//     }
 
//     cout << binSearch(a, 0, n - 1) << endl;

// }