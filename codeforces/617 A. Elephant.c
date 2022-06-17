#include <stdio.h>
int main()
{
	int distance, steps;

	scanf("%d", &distance);

	if (distance % 5 == 0)
	{
		printf("%d\n", distance / 5);
	}
	
	else
	{
		printf("%d\n", (distance / 5) + 1 );
	}


	return 0;
}