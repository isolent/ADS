#include <iostream>
#include <set>
#include <vector>

using namespace std;

class Heap{
    int a[100005];
    int size;
public:
    Heap(){
        a[0] = 2000000000;
        size = 0;
//        a[0] = 20000000000;
    }

    int parent(int i){
        return i / 2;
    }

    int left(int i){
        return i * 2;
    }

    int right(int i){
        return i * 2 + 1;
    }


    void insert(int val){
        size++;
        a[size] = val;
        // sift_up(size);
    }
    //Heapify

    int sift_up(int i){
        while (i > 1 && a[parent(i)] < a[i]){
            swap(a[parent(i)], a[i]);
            i = parent(i);
        }
        return i;
    }

    void sift_down(int i){
        int l = left(i);
        int r = right(i);
        int maxChild = left(i);
        if (l > size) return;
        if (r <= size) {
            if (a[r] > a[l]) maxChild = r;
        }
        if (a[i] < a[maxChild]){
            swap(a[i], a[maxChild]);
            sift_down(maxChild);
        }
    }
    void print(){
        for (int i = 1; i <= size; i ++){
            cout << a[i] << " ";
        }
        cout << endl;
    }
    
    void build_heap(){
        for (int i = size / 2; i >= 1; i --){
            sift_down(i);
        }
    }


    void heapify(int i, int SZ){
        int l = left(i);
        int r = right(i);
        int maxChild = left(i);
        if (l > SZ){
            return;
        }
        if (r <= SZ){
            if (a[r] > a[l]) maxChild = r;
        }
        if (a[i] < a[maxChild]){
            swap(a[i], a[maxChild]);
            heapify(maxChild, SZ);
        }
    }

    void heapSort(){
        for (int i = size; i > 1; i--){
            swap(a[1], a[i]);
            heapify(1, i - 1);
        }
    }


};

int main() {
    Heap heap;
    int n;
    cin >> n;
    for (int i = 0; i < n; i ++){
        int x;
        cin >> x;
        heap.insert(x);
    }
    heap.build_heap();
    heap.print();
    heap.heapSort();
    heap.print();
}
