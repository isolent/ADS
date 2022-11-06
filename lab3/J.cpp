#include <bits/stdc++.h>
using namespace std;

long long workTime(vector <long long> island, long long size){
    long long timeToWork = 0;
    for (auto i : island){
        timeToWork += (i/size);
        if (i % size) 
            timeToWork++;
    }
    return timeToWork;
}

int main(){
    int n, f;
    cin >> n >> f;
    
    vector <long long> island(n);
    for (int i = 0; i < n; i++) {
        cin >> island[i];
    }

    long long l = 0, r = 1e9 + 222;

    while (l + 1 < r){
        long long mid = (l + r) / 2;
        long long timeToSanta = workTime(island, mid);
        if (timeToSanta <= f) r = mid;
        else l = mid;
    } 
    cout << r << endl;
    return 0;
}