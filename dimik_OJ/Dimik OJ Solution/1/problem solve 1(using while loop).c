#include <stdio.h>

int main()
{
	int n;
	int i;
	int a;

	scanf("%d", &n);

	while(n--)
	{
		scanf("%d", &a);

		if (a % 2 == 0)
		{
			printf("even\n");
		}
		else
		{
			printf("odd\n");
		}
	}

	return 0;
}
