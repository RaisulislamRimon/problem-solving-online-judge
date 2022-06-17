#include<stdio.h>
int main()
{
    int a, b;
    double distance, neededfuel;

    scanf("%d%d", &a, &b);

    distance=(a*b);

    neededfuel=distance/12;

    printf("%.3lf\n", neededfuel);

    return 0;
}
