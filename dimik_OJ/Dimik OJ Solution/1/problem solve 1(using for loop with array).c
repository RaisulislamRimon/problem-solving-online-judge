#include <stdio.h>

int main()
{
	int n;
	int i;
	int arr[1001];

	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);

		if (arr[i] % 2 == 0)
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
