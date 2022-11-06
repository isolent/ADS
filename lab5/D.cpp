#include<bits/stdc++.h>

using namespace std;
int n, m, cnt = 0;

class Heap{
    int a[1000005];
public:
    long long size;
    Heap(){
        a[0] = -2147483647;
        size = 0;
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

    void insert(long long val){
        size++;
        a[size] = val;
        shift_up(size);
    }

    void shift_up(int i){
        while(i > 1 && a[parent(i)] > a[i]){
            swap(a[parent(i)], a[i]);
            i = parent(i);
        }
    }

    void shift_down(int i){
        int l = left(i);
        int r = right(i);
        if(l > size) return;
        int minChild = l;
        if(r <= size){
            if(a[r] < a[l]) minChild = r;
        }
        if(a[i] > a[minChild]){
            swap(a[i], a[minChild]);
            shift_down(minChild);
        }
    }

    long long extractMin(){
        if(size == 0) return -1;
        long long ans = a[1];
        swap(a[1], a[size]);
        size--;
        shift_down(1);
        return ans;
    }

    void mix (){
        while(a[1] < m && cnt < n){
            cnt++;
            long long ex1 = extractMin();
            long long ex2 = extractMin();
            long long ex12 = ex1 + 2 * ex2;
            insert(ex12);
        }
        if (cnt >= n) cout <<-1 << endl;
        else cout << cnt;
    }

    void print(){
        for(int i = 1; i <= size; i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }
};

int main(){
    Heap heap;
    cin >> n >> m;
    
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        heap.insert(x);
    }

    heap.mix();
    return 0;
}
