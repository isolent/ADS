#include <iostream>
using namespace std;

bool isPrime(int n) {
    
    bool ok = true;

    if (n == 0 || n == 1)  ok = false;
    
    for(int i = 2; i <= n/2; ++i) {
        if(n % i == 0) {
            ok = false;
            break;
        }
    }
    return ok;
}

int main() {
    int n;
    bool ok = false;
    cin >> n;
    for(int i = 2; i <= n/2; ++i) {
        if (isPrime(i)== true){
        if (isPrime(n - i) == true) {
            cout << i << " " << n - i << endl;
            ok = true;
            return 0;
        }
        }
    }
    if (!ok)
        cout << 0;
    return 0;
}
