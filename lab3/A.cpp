#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    int a[t];
    for (int i = 0; i < t; i++){
        cin >> a[i];
    }
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }    

    for(int i = 0; i < t; i++){
        int x = a[i];
        int li = 0, ri = n;
        while (li + 1 < ri){
            int mid = (li + ri) / 2;
            int midNum;
            if (mid % 2 == 0){
                midNum = arr[mid][0];
            } else {
                midNum = arr[mid][m-1];            
            }
            if (midNum >= x) 
                li = mid;
            else 
                ri = mid;
        }
        int lj = 0, rj = m;
        if (li % 2 == 0){
            while (lj + 1 < rj) {
                int mid = (lj + rj)/2;
                int midNum = arr[li][mid];
                if (midNum >= x){
                    lj = mid;
                } else {
                    rj = mid;
                }
            }    
        } else {
            while(lj + 1 < rj){
                int mid = (lj + rj)/2;
                int midNum = arr[li][mid];
                if(midNum <= x) 
                    lj = mid;
                else 
                    rj = mid;
            } 
        }
        if (arr[li][lj] == x) {
            cout << li << " " << lj << endl;
        } else cout << -1 << endl;
        
    }
    return 0;
}
