#include <stdio.h>

int main()
{
    int n, a, i, b, c;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a);

        b = a / 2;
        c = a % 2 + a / 2;

        printf("%d %d\n", &a, &b);
    }

    return 0;
}
