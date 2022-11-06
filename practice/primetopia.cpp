#include <iostream>
#include <vector>
using namespace std;
bool isPrime(int num);

int main(){
    int n; cin >> n;
    vector <int> v;
    for (int i = 0; i<n; i++){
        if (isPrime(i) == true){
            v.push_back(i);
        }
    } 
    int num;
    for (int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
}

bool isPrime(int num){
    bool flag=true;
    for(int i = 2; i <= num / 2; i++) {
       if(num % i == 0) {
          flag = false;
          break;
       }
    }
}