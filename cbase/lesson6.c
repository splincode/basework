#include <stdio.h>
int main(){
	
	long long int a = 2000000000000; // изменяйте тип и значение
                                    
    // изменяйте тип
	for (int i = 0, j = 0; i < sizeof(long long int) * 8; ++i) {
		if (a & (1 << i)) printf("1"); 
		else printf("0");

		j++;
		if(j == 8) { printf("  "); j = 0;}
	}

	printf("\n");
	printf("Расположена по адресу: %p", &a);

	printf("\n");
	return 0;
}
