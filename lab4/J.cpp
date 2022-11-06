#include <bits/stdc++.h>
using namespace std;

void show(vector <int> &v, int l, int r){
    int m = (l+r)/2;
    cout << v[m] << " " ;
    if (l == r) return;
    show(v, l, m - 1);
    show(v, m + 1, r);
}

int main(){
    int n; cin >> n;
    int sz = pow(2, n) - 1;
    vector <int> v(sz);

    for(int &i : v) {
        cin >> i;
    }

    sort(v.begin(), v.end());
    show(v, 0, sz - 1);
}