#include<stdio.h>
int main()
{
    char A[50];
    int B;
    double C;
    char D[50];
    int E;
    double F;
    double X;

    scanf("%s%d%lf\t%s%d%lf", A,&B,&C, D,&E,&F);

    X=(B*C)+(E*F);

    printf("VALOR A PAGAR: R$ %.2lf\n", X);

    return 0;

}






































































































































