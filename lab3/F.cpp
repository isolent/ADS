#include <bits/stdc++.h>
using namespace std;

int getLastCompetitor(vector <int> &competitors, int power){
    if (power < competitors[0]) return -1;
    int l = 0, r = competitors.size();
    while (l +1 < r) {
        int mid = (l+r)/2;
        if (competitors[mid] <= power){
            l = mid;
        } else r = mid;
    }
    return l;
}

int main(){
    int n; cin >> n;
    vector <int> competitors(n);
    vector <int> prefixSum(n);

    for (int &i : competitors){ 
        cin >> i;
    }

    sort (competitors.begin(), competitors.end());

    prefixSum[0] = competitors[0];
    for (int i = 1; i < n; i++){
        prefixSum[i] = prefixSum[i - 1] + competitors[i];
    }

    int m;
    while (m--){
        int power;
        cin >> power;
        int id = getLastCompetitor(competitors, power);
        cout << (id != -1? id+1: 0) << ' ' << (id != -1 ? prefixSum[id]: 0) << endl;
        // if (id != -1) cout << id + 1 << " " << prefixSum[id] << endl;
        // else cout << 0 << endl;
    }
}