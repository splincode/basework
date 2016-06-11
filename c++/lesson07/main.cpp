#include <iostream>
#include "type.h"

int main(int argc, char *argv[]){

    String txt = "Hello World!";
    Array n = {10, 20, 30};


    std::cout << "количество символов: " <<  txt.size() << std::endl;
    std::cout << "размер массива: " << n.size() << std::endl;
    return 0;
}
