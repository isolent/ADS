#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    vector <int> nums(n);
    for (int i = 0; i < n; i++){
        cin >> nums[i];
        if(i != 0) {
            nums[i] += nums[i-1];
        }
    }

    for (int i = 0; i < nums.size(); i++){
        cout << nums[i] << " "; 
    }
    // while(m--){
    //     int misNum;
    //     cin >> misNum;
    //     int l = -1, r = n - 1;
    //     while (l + 1 < r) {
    //         int mid = (l + r) /2;
    //         if (nums[mid] >= misNum){
    //             r = mid;
    //         } else l = misNum;
    //     }
    //     cout << r + 1 << endl;
    // }
    return 0;
}