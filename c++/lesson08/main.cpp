#include <iostream>
using namespace std;

// универсальный полиморфизм (шаблон)
template <typename T>
class value {
public:
    T val;
};

// динамический полиморфизм

class var {
public:
    virtual char type(){return 'U';}
};

class Int:public var {
public:
    char type(){return 'I';}
};

class String:public var {
public:
    char type(){return 'S';}
};

class Float:public var {
public:
    char type(){return 'F';}
};

class M:public var{};


std::string gettype(var* opt){
    if (opt->type() == 'U'){
        return "unknown";
    } else if (opt->type() == 'I') {
        return "int";
    } else if (opt->type() == 'S'){
        return "string";
    } else if (opt->type() == 'F'){
        return "float";
    }
}

int main(int argc, char *argv[]){

    // универсальный полиморфизм
    value<int> n;
    n.val = 5;

    value<string> s;
    s.val = "text";

    cout << n.val << endl;
    cout << s.val << endl;

    // динамический полиморфизм
    var* a = new Int();
    var* b = new String();
    var* c = new Float();
    var* x = new M();

    cout << gettype(a) << endl;



    return 0;
}
