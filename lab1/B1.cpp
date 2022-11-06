#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    vector <int> v;
    vector <int> ans;
    bool ok = true;
    for (int i = 0; i < n; i++){
        int a; cin >> a;
        v.push_back(a);
    }
    reverse(v.begin(), v.end());
    for (int i = 0; i < n; i++){    
        for (int j = i + 1; j < n; j++){
            if (v[i] >= v[j]){
                ans.push_back(v[j]);
                ok = false;
                break;
            }
        if (ok = true) {
            ans.push_back(-1);
            }
        }
    }
    // reverse(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
}