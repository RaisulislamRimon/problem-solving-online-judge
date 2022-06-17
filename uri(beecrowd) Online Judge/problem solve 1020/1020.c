#include<stdio.h>

int main()
{
    int d, days, months, years;

    scanf("%d", &days);

    years = (days/365);

    printf("%d ano(s)\n", years);

    months = days % 365/30;

    printf("%d mes(es)\n", months);

    d = days %365%30;

    printf("%d dia(s)\n", d);

    return 0;
}
