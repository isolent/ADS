#include <bits/stdc++.h>
using namespace std;
int n;
int a[100005];
long long pref[100005];

void precalc(){
    pref[0] = a[0];
    for (int i = 0; i < n; i++){
        pref[i] = pref[i-1] + a[i]; 
    }
}

long long query(int l, int r){
    if (l > 0) {
        return pref[r] - pref[l-1];
    } else{
        return pref[r];
    }
}

int main(){
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    precalc();

    int m; cin >> m;
    while (m--){
        int l, r;
        cin >> l >> r;
        l--; r--;
        cout << query(l, r) << " ";
    }
}