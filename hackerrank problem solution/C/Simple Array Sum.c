#include <stdio.h>

int main()
{
    int n, ar[1000], i, result= 0;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &ar[i]);
        result = result + ar[i];
        }
    printf("%d\n", result);

    return 0;
}
