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