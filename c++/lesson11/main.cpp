#include <iostream>
using namespace std;

class people {

    char* name;
    char* lastname;

public:

    people(char* n, char* ln): name(n), lastname(ln){};

    char* getname(){
        return name;
    }

};

int main(int argc, char *argv[]){

    people* a = new people("max", "ivanov");
    people* b = new people("igor", "petrov");

    a = b; // учечка памяти

    cout << a->getname()  << " and " << b->getname()  << endl;

    delete a;
    delete b;

    return 0;
}
