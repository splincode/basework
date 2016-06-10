#include <iostream>
using namespace std;

int* sort(int c, int *a){

    for(int i=0; i < c-1; i++){
        for(int j=0; j < c-i-1; j++){
            if(a[j+1] < a[j]){
                swap(a[j+1], a[j]);
            }
        }
    }

    return a;

}

int main(int argc, char *argv[]){

    // argv[0] = ./lesson04
    for (int i = 1; i < argc; i++ ) {

        if (string(argv[i]) == "-name") {
            cout << "Max" << endl;
        } else if (string(argv[i]) == "-lastname") {
            cout << "Ivanov" << endl;
        }

    }

    int* b = new int(5);

    int a[5] = {1, 3, 5, 4, 2};

    int *c = new int[5];
    c[0] = 1;
    c[1] = 3;
    c[2] = 5;
    c[3] = 4;
    c[4] = 2;

    sort(5, a);

    for(int i=0; i < 5; i++){
        cout << *(c++) << " ";
    }

    int d = 5;
    int* p = &d;

    cout << endl << *p << endl;

    cout << endl;

    delete b;    // размер массив
    delete [] c; // [5,             1, 3, 5, 4, 2];

    return 0;
}
