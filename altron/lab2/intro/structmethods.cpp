#include <bits/stdc++.h>
using namespace std;

struct student {
    int age;
    string name;
    string fac;
    int gpa;

    student (int age, string name, string fac, double gpa){
        this->age = age;
        this->name = name;
        this->fac = fac;
        this->gpa = gpa;
    }
    
    void study() {
        gpa += 0.1;
    }

    double gaming(double n){
        gpa -= (n/10);
    }
};

int main(){
    
    student alish(19, "alisher", "FIT", 2.5);
    student amina(20, "amina", "FIT", 3.5);
    student eduard(19, "edu", "FIT", 3.2);

    alish.study();
    alish.study();
    alish.gaming(2);
    alish.study();
    alish.study();
    alish.gaming(1);

    cout << alish.gpa << endl;

}