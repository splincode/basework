#include <stdio.h>
int main(){

	const int x = 0; // номер x-i
	const int y = 1; // номер y-i
  	
	int A[2] = {1, 2};
	int B[2] = {4, 8};

	int dx = B[x] - A[x]; // x2 - x1
	int dy = B[y] - A[y]; // y2 - y1

	printf("расстояние между A и B по x: %i \n", dx);
	printf("расстояние между A и B по y: %i \n", dy);

	return 0;
}