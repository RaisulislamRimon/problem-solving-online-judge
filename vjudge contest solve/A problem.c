#include <stdio.h>

int main()
{
    int a, b, sum, multi;
    scanf("%d%d", &a, &b);
    sum = a + b;
    multi = a * b;
    if(sum == 15 ){
        printf("+", sum);
    }
    else if(multi == 15){
        printf("*", multi);
    }
    else{
        printf("x");
    }


    return 0;
}

