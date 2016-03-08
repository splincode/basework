#include <stdio.h>
int main(){
	
	// Celsius
    int Celsius[5] = {1, 2, 3, 4, 5};
    int Fahrenheit[5];

    // Fahrenheit
    for(int i = 0; i < 5; ++i){
        Fahrenheit[i] = (9/5)*Celsius[i] + 32;
        printf("%i = %i \n", Celsius[i], Fahrenheit[i]);
    }
    
	return 0;
}