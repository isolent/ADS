#include <bits/stdc++.h>
using namespace std;

struct Heap{
    int a[1000087];
    int size;
    Heap(){
        size = 0;
    }
    int parent(int i){
        return (i - 1)/2;
    }
    
    int left(int i){
        return 2 * i + 1;
    }
    
    int right(int i){
        return 2 * i + 2;
    }

    void shift_up(int i) {
        while (i > 0 and a[i] > a[parent(i)]) {
        swap(a[i], a[parent(i)]);
        i = parent(i);
        }
    }

    void insert (int x) {
        a[size] = x;
        ++size;
        shift_up(size-1);
    }

    void ress() {
        int cnt = 0;
        int lim = size/2 + 1;
        for (int i = 0; i <= lim; ++i) {
            if (left(i) < size and right(i) < size and a[left(i)] < a[right(i)]){
                 ++cnt;
            }
        }
        cout << cnt << endl;
    }
};
int main(){
    int n; 
    cin >> n;
    Heap heap;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        heap.insert(x);
    }
    heap.ress();
}
