#include <iostream>
#include <string.h>
#include <initializer_list>

class Type {
public:

    int len;
    int size(){return len;}

};

class String: public Type {
    char* text;

public:

    String(){};
    String(char *t){text = t; len = strlen(text);}
    const char* get(){return text;}
    friend std::ostream& operator<<(std::ostream& os, String& str);
    int size(){
        return len + 1;
    }

};

std::ostream& operator<<(std::ostream& os, String& str){return os << str.get();}

class Array: public Type {
    int* list;

public:

    Array(std::initializer_list<int> ints){

        int size = ints.size();
        len = size;
        list = new int[size];
        int i=0;
        for (int el : ints) {
            list[i++] = el;
        }


    }

    int operator[] (int opt){
        return list[opt];
    }

};
