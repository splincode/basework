#include <stdio.h>
#include <math.h>

int abs (int x) {return x >= 0 ? x : (-1) * x;}
int main(){

	float q;

	int c = 1;
	int x = 0;

	// [с = 1, x = 0] 1*1 - 0 >= 0 [q = 1,7]
	// [с = 1, x = 2] 1*1 - 2 < 0 [q = 0,9 * 2,72  * 2.72 = 6.65]

	q = ((c*c-x) >= 0) ? (1.7*exp(x)) : (0.9*exp(x));
	printf("q = %.2f\n", q);
	
	int a = -25;
	a = abs(a); // |-25| = 25

	printf("a = %i\n", a);

	return 0;
}