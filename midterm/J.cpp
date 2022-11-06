#include <bits/stdc++.h>
using namespace std;
void score(int X[], int n, int targetSum) { 
    sort(X, X + n);
    int l = 0, r = n - 1 ;
    while (l < r){
        if(X[l] + X[r] == targetSum){
           cout << X[l] << " " << X[r];
           break;
        }
        else if(X[l] + X[r] < targetSum)
            l = l + 1;
        else
            r = r - 1;
    }    
}

int main(){
    int m , n;
    cin >> m;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; ++i){
        cin >> a[i];
    }
    score(a, n, m);
}