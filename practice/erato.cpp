#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n){    
    bool is_prime = true;
    if (n == 1 || n == 0) is_prime = false;

    for (int i = 2; i <= n/2; ++i){
        if (n % i == 0){
            is_prime = false;
            break;
        }
    }
    return is_prime;
}

int main(){
    int n; 
    bool flag = false;
    cin >> n;
    for (int j = 2; j < n / 2 ; ++j){
        if (isPrime(j)){
            if(isPrime(n - j)){
                cout << j << " " << n - j;
                flag = true;
            }
        }
    } 
    if(!flag){
        return 0;
    }  
}