#include <bits/stdc++.h>
using namespace std;
// void functions just helps to show the output on console;
int d[1000];
void Foo(int a[], int b[], int n){
    for (int i = 0; i < n; i++){
        d[i] = abs(a[i] - b[i]);
    }
}
void print(int a[], int n){
    for (int i = 0; i<n; i++){
        cout << a[i];
    }
}
int main(){
    int n;
    cin >> n;
    int a[n];
    int b[n];
    for (int i = 0; i<n; i++){
        cin >> a[i];
    }
    for (int i = 0; i<n; i++){
        cin >> b[i];
    }
    Foo(a, b, n);
    print(d, n);
}