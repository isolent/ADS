#include <bits/stdc++.h>

using namespace std;

bool sieve[1000001];    //решето
vector<int> primes;     //вектор, в который будут добавляться простые числа

void compute_primes(int n) {
    for (int i = 2; i <= n; i++) {   //Изначально все числа не вычеркнуты.
        sieve[i] = true;
    }

    for (int i = 2; i <= n; i++) {
        if (sieve[i]) {     //если i не вычеркнуто
            primes.push_back(i);

            for (int j = i * i; j <= n; j += i) {    //вычеркиваем все кратные числа начиная с i^2
                sieve[j] = false;
            }
        }
    }
}

int main() {
    int n; cin >> n;
    compute_primes(n);

    cout << "Prime numbers: ";
    for (int i: primes) {
        cout << i << " ";
    }
}