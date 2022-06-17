#include <stdio.h>

int main()
{
    int n, i ;

    scanf("%d", &i);

    while (i--)
    {
        scanf("%d", &n);

        if ((n / 2) * 2 == n)
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
