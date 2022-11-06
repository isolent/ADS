#include <bits/stdc++.h>
using namespace std;
int main () {
    multiset <string> set;
    multiset <int> set1;
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++){
        string s;
        int m;
        cin >> m >> s;
        set.insert(s);
        set1.insert(m);
    }

    multiset <string> :: iterator it;
    multiset <int> :: iterator i = set1.begin();

    for (it = set.begin(); it != set.end(); it++){
        cout << *i << " " << *it << endl;
        i++;
    }
}