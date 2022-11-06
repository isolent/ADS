#include <bits/stdc++.h>
using namespace std;
queue <int> q;
int ping(int x) {
    q.push(x);

    while(q.front() < x - 3000){
        q.pop();
    }
    return q.size();
}

int main(){
	int n;
    cin>>n;
    while(n--){
        int x;
        cin >> x;
        cout << ping(x) << " ";
    }
};