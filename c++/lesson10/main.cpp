#include <iostream>
using namespace std;

class Error: public exception {
    string err;
public:

    Error(string error_text):
        err(error_text) {};

    string geterror(){
        return err;
    }

};


int main(int argc, char *argv[]){

    try {
        // код вашей программы

        float a; cout << "a = "; cin >> a;
        float b; cout << "b = "; cin >> b;

        if (b == 0) throw Error("деление на ноль");

        cout << "a/b = " << (a/b) << endl;


    } catch(Error e) {

        // работа вашей программы, в случае, если произошла критическая ситуация
        cout << "Ошибка: " << e.geterror() << endl;

    }

    return 0;
}
