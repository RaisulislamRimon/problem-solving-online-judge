#include<stdio.h>
int main()
{
    double X, Y, Z, A, B, C, MEDIA;
    X = 2;
    Y = 3;
    Z = 5;
    scanf("%lf%lf%lf",&A,&B,&C);

    MEDIA=((A*X)+(B*Y)+(C*Z))/(X+Y+Z);

    printf("MEDIA = %.1lf\n",MEDIA);

    return 0;



}
