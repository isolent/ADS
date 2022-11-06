#include <bits/stdc++.h>
using namespace std;

pair <int, int> getRange(vector <int> &nums, int lx, int rx){
    pair <int, int> res = {-1, -2};

    if (nums[0] > rx || nums.back() < lx) return res;

    int l = -1, r = nums.size() - 1;

    while (l + 1 < r) {
        int mid = (l+r) / 2;
        if (nums[mid] >= lx) r = mid;
        else l = mid; 
    }
    res.first = r;

    l = 0; r = nums.size();
    while (l + 1 < r){
        int mid = (l + r) /2;
        if (nums[mid] <= rx) l = mid;
        else r = mid;
    }

    res.second = l;
    return res;
}

int main() {
    int n, q;
    cin >> n >> q;
    vector <int> nums(n);
    
    for (int i = 0; i < n; i++){
        cin >> nums[i];
    }

    sort(nums.begin(), nums.end());

    while (q--){
        int l1, r1, l2, r2;
        cin >> l1 >> r1 >> l2 >> r2;
        
        pair <int, int> firstRange = getRange(nums, l1, r1);
        pair <int, int> secondRange = getRange(nums, l2, r2);
        int L1 = firstRange.first;
        int R1 = firstRange.second;
        int L2 = secondRange.first;
        int R2 = secondRange.second;

        int c = 0;
        c += max (0, R1 - L1 + 1);
        c += max (0, R2 - L2 + 1);

        if (R1 >= R2 and L1 <= L2)
            c -= max(0, R2 - L2 + 1);
        else if (R2 >= R1 and L2 <= L1)
            c -= max(0, R1 - L1 + 1);
        else if (L1 <= L2 and R1 >= L2)
            c -= max(0, R1 - L2 + 1);
        else if (L2 <= L1 and R2 >= L1)
            c -= max(0, R2 - L1 + 1);
        cout << c;
    }
}