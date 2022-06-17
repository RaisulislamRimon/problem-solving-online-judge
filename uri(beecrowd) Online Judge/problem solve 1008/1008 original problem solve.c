#include<stdio.h>
int main()
{
    int A, B, NUMBER;
    double X,SALARY;

    scanf("%d",&A);
    scanf("%d",&B);
    scanf("%lf",&X);

    SALARY=B*X;

    printf("NUMBER = %d\n",A);



    printf("SALARY = U$ %.2lf\n",SALARY);

    return 0;
}
