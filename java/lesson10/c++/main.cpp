#include <iostream>
using namespace std;
 
class A {
public:

    int sum(int a, int b){
        cout << "A::sum(" << a << "," << b << ") = ";
        return a+b;
    }

};

class B: public A {

    int sum(int a, int b){
        A::sum(a, b);
    }
};

int main() {
    
    A* a = new A;
    cout << a->sum(1, 2) << endl;

    A* b = new B;
    cout << b->sum(0, 2) << endl;


    return 0;    
}