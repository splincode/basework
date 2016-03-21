#include <stdio.h>
#include <math.h>

int main(){

	float a = 1;
	float b = 1;
	float c = 1;

	// a+b > с и a+c > b и b+c > a
	if ((a+b) > c && (a+c) > b && (b+c) > a) {
		// если треугольник правильный

		float p = (a + b + c) / 2;
		float s = sqrt(p*(p-a)*(p-b)*(p-c));

		float ha = (2.0/a) * s;
		float hb = (2.0/b) * s;
		float hc = (2.0/c) * s;


		printf("ha = %.1f\n", ha);
		printf("hb = %.1f\n", hb);
		printf("hc = %.1f\n", hc);

	} else {
		// вывод ошибки
		printf("Не правильные значения a, b, c \n");

	}

	return 0;
}