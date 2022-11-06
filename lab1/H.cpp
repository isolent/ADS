#include <iostream>  
using namespace std;  
int main(){  
    int n;
    bool ok = false;  
    cin >> n;  
    if(n == 1){
    cout << "NO";
    }  else {
    for(int i = 2; i <= n / 2; i++)  {  
          if(n % i == 0)  {  
          cout<< "NO";  
          ok = true;  
          break;  
    }  
}  
    if (ok == false){  
        cout << "YES";  
        return 0; 
        } 
    }
}