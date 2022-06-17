#include<stdio.h>
int main()
{
	int x, y, a, i;
	
	scanf("%d", &x);
	
	if(x % 2 == 0) {
		y = x + 1;
		
		printf("%d\n", y);
	}
	if(y % 2 != 0) {
		for(i = 0; i < 5; i++) {
			y = y + 2;
			printf("%d\n", y);
						
		}
	}
	return 0;
}
