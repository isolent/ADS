//https://pastebin.com/AdLmH29p

#include <iostream>
using namespace std;

unsigned long long heap[200010];
int n = 0;

void heapify(int i) {
    int left = i + i + 1;
    int right = i + i + 2;

    int mx = i;

    if (left < n && heap[left] < heap[mx]) {
        mx = left;
    }
    if (right < n && heap[right] < heap[mx]) {
        mx = right;
    }

    if (mx != i) {
        swap(heap[i], heap[mx]);
        heapify(mx);
    }
}

void build() {
    for (int i = n / 2; i >= 0; i--) {
        heapify(i);
    }
}

void insert(unsigned long long value) {
    heap[n++] = value;
    int i = n - 1;
    while (i > 0) {
        int p = (i - 1) / 2;
        if (heap[i] < heap[p]) {
            swap(heap[i], heap[p]);
            i = p;
        } else {
            break;
        }
    }
}

void deleteMin() {
    swap(heap[0], heap[n - 1]);
    n--;
    heapify(0);
}

void print() {
    for (int i = 0; i < n; i++) {
        cout << heap[i] << " ";
    }
    cout << endl;
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> heap[i];
    }

    build();

    unsigned long long ans = 0;

    while (n > 1) {
        unsigned long long a = heap[0];
        deleteMin();
        unsigned long long b = heap[0];
        deleteMin();
        ans += a + b;
        insert(a + b);
    }

    cout << ans << endl;
}