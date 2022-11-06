#include <bits/stdc++.h> 
using namespace std; 
bool vis(int n){
    if (n % 4 == 0 and n % 100 != 0 ){ 
        return true;
    }
    else if (n % 400 == 0){
        return true;
    }
    return false;
}

int main() { 
    int n; 
    cin >> n; 
    cout << vis(n);
}