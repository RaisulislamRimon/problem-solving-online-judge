#include<stdio.h>


int main()
{
    int N, x, y,z,z1,z2,z3,z4,z5,z6,z7,z8,z9,z10;

    scanf("%d",&N);
    printf("%d\n",N);

    x = (N/100);

    printf("%d nota(s) de R$ 100,00\n",x);

    y = N%100 ;



    z = y/50;
    printf("%d nota(s) de R$ 50,00\n",z);

    z1=y%50;


    z2=z1/20;
    printf("%d nota(s) de R$ 20,00\n",z2);

    z3=z1%20;


    z4=z3/10;
    printf("%d nota(s) de R$ 10,00\n",z4);
    z5=z3%10;


    z6=z5/5;
    printf("%d nota(s) de R$ 5,00\n",z6);
    z7=z5%5;


    z8=z7/2;
    printf("%d nota(s) de R$ 2,00\n",z8);

    z9=z7%2;


    z10=z9/1;
    printf("%d nota(s) de R$ 1,00\n",z10);


    return 0;
}


































































