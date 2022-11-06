#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    deque <int> d;
    bool ok = true;
    
    while (n > 0){
        int x; cin >> x;
        if (x == 2){
            if (ok) ok = false;
            else ok = true;
        } else {
            int x ; cin >> x;
            if (ok == true) {
                d.push_back(x);
            } else {
                d.push_front(x);
            }
        }
        n--; 
    }  
    
    if (ok){
        for (int i = 0; i < d.size(); ++i){
            cout << d[i] << " ";
        }
    } else {
        for (int i = d.size() - 1; i >= 0; --i){
            cout << d[i] << " " ;
        }
    }
}