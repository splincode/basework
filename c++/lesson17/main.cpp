#include <iostream>
using namespace std;

int main(int argc, char *argv[]){

    int el[5] = {2, 5, 29, 0, 15};

    int max = [el](){

        int maxi = el[0];
        for (int i=1; i < 5; i++) {
            if (maxi < el[i]) {
                maxi = el[i];
            }
        }

        return maxi;

    }();


    cout << max << endl;
    return 0;
}
