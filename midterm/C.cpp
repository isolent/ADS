#include <iostream>
using namespace std;

class Heap{
      int a[100087];
      int size;
public:
    Heap() {
        size = 0;
    }

    int parent(int i) {
        return (i-1)/2;
    }

    int right(int i) {
        return i*2 + 2 ;
    }

    int left(int i) {
        return i*2 + 1;
    }

    int shift_up(int i) {
        while (i > 0 and a[i] > a[parent(i)]) {
          swap(a[i], a[parent(i)]);
          i = parent(i);
        }
        return i + 1;
    }

    void push(int v) {
        a[size] = v;
        ++size;
        shift_up(size-1);
    }
    
    void increase(int i, int num) {
        a[i] += num;
        cout << shift_up(i) << endl;
    }

    void print() {
        for (int i = 0; i < size; ++i) {
          cout << a[i] << " ";
        }
    }
};

int main() {
    int n; cin >> n;
    Heap h;

    for (int i = 0; i < n; ++i) {
      int x; cin >> x;
      h.push(x);
    }

    int m; cin >> m;
    for (int i = 0; i < m; ++i) {
        int l, x;
        cin >> l >> x;
        h.increase(l - 1, x);
    }
    h.print();
}