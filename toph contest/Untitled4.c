#include<stdio.h>
#include<string.h>
int main()
{
	int result, i;
	char a_1[100000] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	char x_1[100000] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
	
	scanf("%s", a_1);
	scanf("%s", x_1);
	
	result = strcmp (a_1, x_1)
	if (result == '\0') {
		printf("YES\n");
	}
	else {
		printf("NO\n");
	}
	
	return 0;
}
