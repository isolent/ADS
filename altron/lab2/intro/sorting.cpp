#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n = 5;

void print(int a[]){
    for (int i = 0; i < n; i ++){
        cout << a[i] << " ";
    }
    cout << endl;
}

void print(vector<int> &vec){
    for (int i : vec){
        cout << i << " ";
    }
    cout << endl;
}


struct student{
    int age;
    string name;
};


bool cmp(student a, student b){
    //a, b
    return a.age > b.age;
}

int main () {
    student students[5];
    for (int i = 0; i < n; i ++){
        cin >> students[i].age >> students[i].name;
    }
    sort(students, students + n, cmp);
    for (int i = 0; i < n; i ++){
        cout << students[i].age << " " << students[i].name << endl;
    }
//    int n = 5;
//    int a[5] = {2, 3, 1, 4, 5};
//    print(a);
//    sort(a, a + n, cmp);
//    print(a);
//    vector<int> vec;
//    vec.push_back(2);
//    vec.push_back(5);
//    vec.push_back(3);
//    vec.push_back(1);
//    vec.push_back(4);
//    print(vec);
//    sort(vec.begin(), vec.end(), cmp);
//    print(vec);
}