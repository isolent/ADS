#include <bits/stdc++.h>
using namespace std;

class Heap{
    int a[100005];
    int size;
public:
    Heap(){
        a[0] = INT_MAX;
        size = 0;
    }
    
    int parent(int i){
        return i / 2;
    }

    int left(int i) {
        return i * 2;
    }

    int right(int i){
        return i * 2 + 1;
    }

    void insert(int val){
        size++;
        a[size] = val;
        shift_up(size);
   }

    void shift_up(int i){
        while(a[i] > 1 and a[parent(i)] < a[i]){
            swap(a[parent(i)], a[i]);
            i = parent(i);
        }
   }

    void shift_down(int i){
        int l = left(i);
        int r = right(i);
        int maxChild = left(i);
        if (l > size) return;
        if (r <= size) {
            if (a[r] > a[l]) maxChild = r;
        }
        if (a[i] < a[maxChild]){
            swap(a[i], a[maxChild]);
            shift_down(maxChild);
        }
   }


    int extract_max(){
        int ans = a[1];
        swap(a[1], a[size]);
        size--;
        shift_down(1);
        return ans;
    }

    void print(){
        for (int i = 1; i <=size; i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }   
};

int main(){
    Heap heap;
    int n; cin >> n;
    for (int i = 0; i < n;i++){
        int x; cin >> x;
        heap.insert(x);
    }
    heap.print();
    cout << heap.extract_max()<< endl;
    cout << heap.extract_max()<< endl;
    cout << heap.extract_max()<< endl;
    heap.print();
}