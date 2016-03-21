#include <stdio.h>
int main(){
	
    int Celsius[5] = {1, 2, 3, 4, 5}; // Celsius
    
    // Fahrenheit
    int Fahrenheit[5] = {
    	(9/5)*Celsius[0] + 32,
    	(9/5)*Celsius[1] + 32,
    	(9/5)*Celsius[2] + 32,
    	(9/5)*Celsius[3] + 32,
    	(9/5)*Celsius[4] + 32
    };

   	// 0 гр., 1, 2, ... 5 = * значение по Фаренгейту
	printf("%i = %i \n", Celsius[0], Fahrenheit[0]);
	printf("%i = %i \n", Celsius[1], Fahrenheit[1]);
	printf("%i = %i \n", Celsius[2], Fahrenheit[2]);
	printf("%i = %i \n", Celsius[3], Fahrenheit[3]);
	printf("%i = %i \n", Celsius[4], Fahrenheit[4]);
	
	return 0;
}