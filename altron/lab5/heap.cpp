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
        return i/2;
    }
    void insert(int val){
        size++;
        a[size] = val;
        shift_up(size);
    }

    void shift_up(int i){
        while(i > 1 && a[parent(i)] < a[i]){
            swap(a[parent(i)], a[i]);
            i = parent(i);
        }
    }

    void print(){
        for (int i = 1; i <= size; ++i){
            cout << a[i]<< " ";
        }
        cout << endl;
    }
};

int main(){
    Heap heap;
    heap.insert(1);
    heap.insert(2);
    heap.insert(6);
    heap.insert(5);
    heap.insert(7);
    heap.insert(3);
    heap.print();
}