#include<stdio.h>
int main()
{
	int x, y, a, i;

	scanf("%d", &x);

	if (x % 2 != 0) {
	    printf("%d\n", x);
        for(i = 0; i < 5; i++) {
			x = x + 2;
			printf("%d\n", x);

		}
	}

	else {
        x++;
        printf("%d\n", x);
        for (i = 0; i < 5; i++) {
            x+=2;
            printf("%d\n", x);
        }
	}

	return 0;
}
