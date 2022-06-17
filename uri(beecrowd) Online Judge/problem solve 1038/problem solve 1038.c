#include<stdio.h>
int main()
{
	int n, i; // n = product code
	/*int p_1 = 4.00;
	int p_2 = 4.50;
	int p_3 = 5.00;
	int p_4 = 2.00;
	int p_5 = 1.50; // p = quantity of product*/
	double p[5] = {4.00, 4.50, 5.00, 2.00, 1.50};
	double Total;
	
	for (i = 0; i <= 5; i++) {
		scanf("%s%d", &p[i], n);
	}
	Total = p[i] * n;
	
	printf("Total: R$ %lf\n", Total);
	
	
	
	
	return 0;	
}
