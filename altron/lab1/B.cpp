#include <iostream>
#include <queue>

using namespace std;

//Data structure - способ хранения и организации данных


int main() {
    queue <int> st;
    string s = "";
    while(s != "exit"){
        cin >> s;
        if (s == "push"){
            int n;
            cin >> n;
            st.push(n);
            cout << "ok" << endl;
        }
        if (s == "pop"){
            cout << st.front() << endl;
            st.pop();
        }
        if (s == "front"){
            cout << st.front() << endl;
        }
        if (s == "size"){
            cout << st.size() << endl;
        }
        if (s == "clear"){
            while (st.size() > 0){
                st.pop();
            }
            cout << "ok" << endl;
        }
    }
    cout << "bye" << endl;
    return 0;
}