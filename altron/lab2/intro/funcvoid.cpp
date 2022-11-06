#include <bits/stdc++.h>
using namespace std;
// void functions just helps to show the output on console;

void print(int a[], int n){
    for (int i = 0; i<n; i++){
        cout << a[i];
    }
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i<n; i++){
        cin >> a[i];
        a[i] = a[i]*a[i];
    }
    print(a,n);
}