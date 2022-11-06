#include <bits/stdc++.h>
using namespace std;
struct Student{
    string name;
    int age;
    double gpa;
    Student(string name, int age, double gpa){
        this -> name = name;
        this -> age = age;
        this -> gpa = gpa;
    }
};


int main() {
    Student a("Aaa", 18, 4.0);
    cout << a.name;
}