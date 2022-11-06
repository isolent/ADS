#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    n = 5;
    cout << &n << endl;
    int *p = &n;
    cout << p << endl; 
    cout << *p << endl; 
    *p = 100;
    cout << n;
    int **pp = &p ;
    cout << **pp << endl;
    **pp = 200;
    int a[5] = {0, 1, 2, 3, 4};
    cout << &a[0] << endl;
    cout << &a[1] << endl;
    cout << *(a) << endl;
    cout << *(a + 1) << endl;
}