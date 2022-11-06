#include <bits/stdc++.h>
using namespace std;
int main () {
    string s;
    cin >> s;
    stack <char> st;

    // for (int i = 0; i < s.size(); i++){
    //     if (!st.empty() and st.top() == s[i]){
    //         st.pop();
    //     }
    //     else {
    //         st.push(s[i]);
    //     }    
    // }
    // sbassbab
    // absssbab
    // abcabc => aabbcc
    string t = "";
    for (int i = 0; i < s.size(); i++){
        if (!st.empty() and st.top() == s[i]){
            t += st.top();
            t +=  s[i];
            st.pop();
        } else{
            st.push(s[i]);
        }
    }
    if (s.size() == t.size()){
        cout << t;
    }
    else cout << "Can't be balanced";
}

