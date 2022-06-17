#include<stdio.h>
int main()
{
    int i = 10, j =  10;
    ++i;
    j++;

    printf(" i = %d, j = %d", i, j);

    printf("\n i = %d, j = %d", ++i, j++);

    printf("\n i = %d, j = %d", i++, ++j);

    return 0;

}
