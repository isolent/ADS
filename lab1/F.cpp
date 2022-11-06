#include <iostream>
using namespace std;
bool isPrime(int n){
    bool ok = false;;
    for (int i = 2; i < n; i++){
        if (n % i == 0){
            ok = true;
            break;
        }
    }
    if (ok == false){
        return true;
    } else{
        return false;
    }
}
 
int main(){
	int n, pos = 1;
    int cnt = 0;
    cin >> n;
    while(true){
        pos++;
        if(isPrime(pos)){
            cnt +=1;
        }
        if(cnt == n){
            cout<<pos;
            break;
        }
    }
}