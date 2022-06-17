#include<stdio.h>
int main()
{
	double a;
	
	scanf("%lf", &a);
	
	if (a < 0 || a > 100) {
		printf("Fora de intervalo\n", a);
	}
	else {
		if (a >= 0 && a <= 25) {
			printf("Intervalo [0,25]\n", a);
		}
		else if (a > 25 && a <= 50) {
			printf("Intervalo (25,50]\n", a);
		}
		else if (a > 50 && a <= 75) {
			printf("Intervalo (50,75]\n", a);
		}
		else {
			printf("Intervalo (75,100]\n", a);
		}
		
	}
	return 0;
}
