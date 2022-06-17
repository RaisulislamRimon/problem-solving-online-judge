#include<stdio.h>
int main()
{
    double X, Y, A, B, MEDIA;

    X = 3.5;
    Y = 7.5;

    scanf("%lf",&A);
    scanf("%lf",&B);

    MEDIA = ((A*X)+(B*Y))/(X+Y);

    printf("MEDIA = %.5lf\n",MEDIA);

    return 0;
}
