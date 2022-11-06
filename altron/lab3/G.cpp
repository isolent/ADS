#include <bits/stdc++.h>
using namespace std;

string binSearch (int a[], int l, int r, int x){
    while (l <= r){
    int mid = l + ((r-l)/2);
        if (a[mid] == x) return "YES" ;
        if (a[mid] < x) l = mid + 1;
        else r = mid - 1;
    }
    return "NO";
}

int main() {
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; ++i){
        cin >> a[i];
    }
    for (int i = 1; i <= k; ++i){
        int x; cin >> x;
        cout << binSearch(a, 0, n - 1, x) << endl;
    }
}