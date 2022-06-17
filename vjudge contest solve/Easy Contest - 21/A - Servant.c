#include <stdio.h>
int main() {
	int n, arr[1000], i;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < n; i++) {
	
		if (arr[i] < 10) {
			printf("What an obedient servant you are!\n");
		}
	
		else {
			printf("-1\n");
		}
	}
	return 0;
}
