#include <stdio.h>

int main()
{
	int n;
	int i;
	int a;
	//int arr[1001];

	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		//scanf("%d", &arr[i]);
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
