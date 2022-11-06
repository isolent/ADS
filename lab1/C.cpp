#include <bits/stdc++.h>
using namespace std;

bool EqualStrings(string str1, string str2){
    deque <char> s;
    deque <char> t;
    for (int i = 0; i < s.size(); i++){
        if (s[i] != '#'){
            s.push_back(s[i]);
        } else s.pop_back();
    }
    for (int i = 0; i <= t.size(); i++){
        if (t[i] != '#'){
            t.push_back(t[i]);
        } else t.pop_back();
    }
    if (s == t) return true;
    return false;
}

int main() {
    string s, t;
    cin >> s >> t;
    if (!EqualStrings(s,t)) {
        cout << "No";
        return 0;
    }
    else {
        cout << "Yes";
    }
}
