#include <bits/stdc++.h>
using namespace std;
int main(){
    deque <int> deq;
    string s;
    int i = 0;
    int a;
    while(s[i] != '!'){
        cin >> s;
        if(s[0] == '+'){
            int x; cin >> x;
            deq.push_front(x);
        }
        else if(s[0] == '-'){
            int x; cin >> x;
            deq.push_back(x);
        }
        else if(s[0] == '*' and !deq.empty()){
            if(deq.size() == 1) {
                cout << deq.front() + deq.front() << endl;
                deq.pop_front();
            } else if (deq.size() >= 2) { 
                int ans = deq.front() + deq.back();
                cout << ans << endl;
                deq.pop_front();
                deq.pop_back();
            }
            }
            else if (s[0] == '*' and deq.empty()) {
                cout << "error" << endl;
            }
        }
    return 0;
}
