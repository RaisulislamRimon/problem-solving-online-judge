#include <stdio.h>

int main()
{
    int T;
    int i;
    char n[10001];

    scanf("%d", &T);

    for (i = 1; i <= T; i++)
    {
        scanf("%s", n);

        if (n[i] % 2 == 0)
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
