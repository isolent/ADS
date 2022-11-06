#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    bool ok = false;;
    for (int i = 2; i * i <= n; i++){
        if (n % i == 0){
            ok = true;
            break;
        }
    }
    if (n == 1) return false;
    if (ok == false){
        return true;
    } else{
        return false;
    }
}

int main(){
    int cnt = 1;
    int n; cin >> n;
    vector <int> v;
    vector <int> a;
    int i = 1;
    a.push_back(2);
    while(i <= 100) {
        if (isPrime(i)) {
            cnt += 1;
            a.push_back(i);
        }        
        i++;
    }

    // for (int i = 0; i<a.size(); i++){
    //     if (isPrime(a[n])) v.push_back(a[a[n]]);
    // }
    // cout << a[n] << endl;
    for (int i = 1; i < a.size(); i++){
        if (isPrime(i)) v.push_back(a[i]);
    }
    // for (int i = 1; i < a.size(); i++){
    //     cout << a[i] << " " << i << endl;
    // }


    // cout << endl;

    for (int i = 1; i < v.size(); i++){
        if(i == n) cout << v[i-1];
    }
}

// #include <iostream>
// #include <cmath>
// using namespace std;

// bool isP(int n) {
//   if (n == 1 or n == 4) return 0;
//   if (n == 2 or n == 3 or n == 5 or n == 7) return 1;
//   if (n % 2 == 0 or n % 3 == 0) return 0;
//   for (int i = 3; i <= sqrt(n); i += 2) {
//     if (n % i == 0) return 0;
//   }
//   return 1;
// }

// int main() {
  
//   int n;
//   cin >> n;
//   int a = 2;
//   int m = n;
//   while (n--) {
//     while (!isP(a)) ++a;
//     ++a;
//   }
//   --a;
//   n = a - m + 1;

//   while (n--) {
//     while (!isP(a)) ++a;
//     ++a;
//   }

//   cout << --a << endl; 

//   return 0;
// }