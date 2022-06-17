#include<stdio.h>
int main()
{
    int a, b, sum;
    char sign1 = "+", sign2 = "-";

    scanf("%d %c %d", &a, &sign1, &b);

    if(a + b){
        printf("%d\n", a + b);
    }
    else{
        printf("%d\n", a - b);
    }



    return 0;
}
