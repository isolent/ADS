#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; 
    int cnt = 0;    
    cin >> n;
    
    map <int, bool> div;     
    if (n < 2) { 
        cout << 0; 
        return 0; 
    } 

    for(int i = 2; i * i <= n; i++) { 
        while(n % i == 0) { 
            if(div[i] == false) { 
                cnt++;
                div[i] = true; 
            } 
            n = n/i; 
        } 
    } 

    
    if(n > 2) cnt++;
    cout << cnt;
}