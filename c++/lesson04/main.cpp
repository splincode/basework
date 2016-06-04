#include <iostream>
#include "extern.cpp"

using namespace std;


void sort(int c, int a[]){

    for (int i = 0; i < c; i++){
        for(int j = 0; j < (c-1); j++) {

            if (a[i] >= a[j+1]) {

                int temp = a[j+1];
                a[j+1] = a[i];
                a[i] = temp;
            }

        }
    }

    for (int i = 0; i < c; i++) {
        cout << a[i] << " ";
    }

}



int main(int argc, char *argv[]){


    for (int i = 1; i < argc; i++ ){

        if (string(argv[i]) == "-key") {
            cout << "hash" << endl;
        } else if (string(argv[i]) == "-viewpass") {
            cout << "12345" << endl;
        }

    }

    int a[5] = {1, 3, 2, 5, 4};

    sort(5, a);


    return 0;


    //int a; // стековая область памяти
    //int* b = new int(2); // динамическая область памяти

    //cout << a << endl;

    return 0;
}
