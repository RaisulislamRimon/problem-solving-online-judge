#include<stdio.h>
int main()
{
	int x, a;
	
	scanf("%d%d", &x, &a);
	
	if (x > a || x == a) {
		printf("10\n");
	}
	else {
		printf("0\n");
	}
	return 0;
}
