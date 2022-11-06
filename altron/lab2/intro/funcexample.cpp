#include <bits/stdc++.h>
using namespace std;
// вызов функции
// Тип данных - тип возвращаемого значения
// Имя - 
// список параметров
// тело
// возврат

int sum(int a, int b){ // parameters
    int ans = a + b;
    return ans;
}

int fac(int n){
    int ans = 1;
    for (int i = 0; i <= n; i++){
        ans *= i;
    }
    return ans;
}
// int min(int a, int b, int c, int d) - загаловок/прототип функции
int min(int a, int b, int c, int d){
    int A = min(a,b);
    int B = min(c,d);
    int ans = min(A, B);
    return ans;    
}
int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << min(a, b, c, d)<< endl; // arguments
    // аргументы функции инициализируют параметры функции ??
    //  инициализация - давать точное значение
}