#include <iostream>
using namespace std;

// функции
int foo() {
    int a = 0;
    return a;
}

struct A {
    int a = 1;
    int b = 2;
};

struct B {


};

// перегрузка
int mymax(int a, int b) {
    cout << "int" << endl;
    return (a >= b) ? a : b;
}

double mymax(double a, double b) {
    cout << "double" << endl;
    return (a >= b) ? a : b;
}

float mymax(float a, float b) {
    cout << "float" << endl;
    return (a >= b) ? a : b;
}

int main(int argc, char *argv[]){

    // типы данных
    string text = "Hello World!";
    char s = 's';
    int a = 1;
    float b = 2.5;
    double c = 3.21231231231232;
    bool d = true;
    long long e = 1111111111111111111;

    const float PI = 3.14;


    // перегрузка
    cout << mymax(2, 1) << endl;

    // структура
    A str;

    cout << str.a << endl;

    return 0;

    // инструкци
    if (d){} else {}
    switch(a){case 0: break;}
    for(; ;){} // for (int i : obj) { }
    while(c){}


    return 0;
}
