#include <stdio.h>
int main(){

	// Celsius
    float Celsius[5] = {1, 2, 3, 4, 5};
    float Fahrenheit[5];

    // Fahrenheit
    for(int i = 0; i < 5; ++i){
        Fahrenheit[i] = (9.0/5.0)*Celsius[i] + 32.0;
        printf("%.1f = %.1f \n", Celsius[i], Fahrenheit[i]);
    }
    
	return 0;
}