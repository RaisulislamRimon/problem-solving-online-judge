// this problem is for calculating the area of a circle
// now the header file

#include <stdio.h>
#define PI 3.14159


int main()
{
    double R, A;

    scanf("%lf", &R);

    A = PI * R * R;

    printf("A=%0.4lf\n", A);

    return 0;

}
