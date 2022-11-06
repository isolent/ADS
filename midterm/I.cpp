#include <bits/stdc++.h>
using namespace std;

string toBinary(long long n) {
    string s;
    while (n > 0) {
        if (n % 2) {
            s += "1";
        }
        else s += "0";
        n /= 2;
    }
    return s;
}

int main() {
    int n; cin >> n;
    for (int i = 0; i < n; ++i) {
        long long x;
        cin >> x;
        string s = toBinary(x);

        deque<char> deq;
        bool ok = true;
        for (int j = 0; j < s.size(); ++j) {
            if (s[j] == '0') {
                deq.push_back('0');
            }
            else {
                if (deq.empty()) {
                    ok = false;
                }
                else deq.pop_back();
            }
            }
        if (ok == true && deq.empty()) {
            cout << "YES" << endl;
        } else cout << "NO" << endl;
    }
}