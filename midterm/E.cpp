#include <bits/stdc++.h>
using namespace std;
vector <int> v;

void push(int x){
    v.push_back(x);
}

void pop(){
    v.pop_back();
}

void getMax(){
    long long mx = -99999999999999;
    if(v.size()){
        for(int i = 0; i < v.size(); ++i){
            if(v[i] > mx){
                mx = v[i];
            }
        }
        cout << mx << endl;
        } else {
        cout << "error" << endl;
    }
}
void getCur(){
    if(!v.empty()){
        cout << v[v.size()-1] << endl;
    }
    else cout << "error" << endl;
}

int main(){
    int n, x;
    string s; cin >> n;

    while(n--){
        cin >> s;
        if(s == "add"){
            cin >> x;
            push(x);
        } else if(s == "delete"){
            pop();
        } else if(s == "getmax"){
            getMax();
        } else if(s == "getcur"){
            getCur();
        }
    }
}