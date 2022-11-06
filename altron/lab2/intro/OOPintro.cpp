#include <bits/stdc++.h>
using namespace std;

// OOP - парадигма программирования
// классы, объекты

// объект - экземпляр класса
// класс - описание, схема, blueprint множества объектов

// ноутбук: производитель - str, модель - str, год выпуска  - int, цена - double

// apple, macbook air, 2020, 550k
// strict point(){ по умолчанию public

// };

class Computer{ // по умолчанию private
public:
    string company; // class fields
    string model;
    int year;
    double price;

    Computer(string c, string m, int y, double p){
        company = c;
        model = m;
        year = y;
        price = p;
    }

    void upgrade(){
        price += 20000;
    }
    void print(){
        cout << company << endl;
        cout << model << endl;
        cout << year << endl;
        cout << price << endl;
    }
};

class Parallel{
public:
    int a, b, c;
    Parallel(int a, int b, int c){
        this->a = a;
        this->b = b;
        this->c = c;
    }
    int volume(){
        return a*b*c;
    }
    int total_area(){
        return 2*a*b + 2*a*c +2*b*c;
    }
};
// модификаторы доступа
// access modifiers
// private
// public
// методы - функция пренадлежащая классу
// конструктор - метод, инициализирующий поля объекта при его создании
// инициализация - давать конкретное значение


int main (){
    Computer macbook("apple", "air", 2020, 550000); 
    // macbook.model = "air";
    // macbook.company = "apple";
    // macbook.year = 2020;
    // macbook.price = 550000;

    Computer spectre("hp", "spectre", 2018, 600000);
    // spectre.model = "Spectre";
    // spectre.company = "HP";
    // spectre.year = 2018;
    // spectre.price = 600000;
    Parallel a(1, 2, 3);
    Parallel b(4, 5, 6);
    cout << a.volume() << endl;
    cout << b.total_area() << endl;

}