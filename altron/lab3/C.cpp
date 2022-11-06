#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int mx = -2000000000;
    int ind = -1;
    for (int i = 0; i < n; i++){
        int x; cin >> x;
        if (x > mx){
            mx = x;
            ind = i;
        }
    }
    cout << ind + 1<< endl;
}