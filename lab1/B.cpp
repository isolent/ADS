#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i ++){
        cin >> a[i];
    }
    queue <int> q;
    for (int i = 0; i < n; i ++){
        if (i == 0){
            q.push(-1);
            continue;
        }
        bool found = false;
        for (int j = i - 1; j >= 0; j --){
            if (a[j] <= a[i]){
                q.push(a[j]);
                found = true;
                break;
            }
        }
        if (!found) q.push(-1);
    }

    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
}
