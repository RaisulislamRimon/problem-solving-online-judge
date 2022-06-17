#include<stdio.h>
int main()
{
    int n;

    scanf("%d", &n);

    char str[10] = {"one", "two", "three", 'four', 'five', 'six', 'seven', 'eight', 'nine'};


    if(n > 9){
        printf("Greater than 9\n", n);
    }
    else{
        printf("%s\n", str[n-1]);
    }


    return 0;
}
