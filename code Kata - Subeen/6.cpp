#include <iostream>
#include <stdio.h>

using namespace std;

void add(int n1, int n2)
{
    printf("%d + %d = %d\n", n1, n2, n1 + n2);
}

void sub(int n1, int n2)
{
    printf("%d - %d = %d\n", n1, n2, n1 - n2);
}

void mul(int n1, int n2)
{
    printf("%d * %d = %d\n", n1, n2, n1 * n2);
}

void divi(int n1, int n2)
{
    if (n2 == 0) {
        printf("Can not divide by zero\n");
        return;
    }
    printf("%d / %d = %d\n", n1, n2, n1 / n2);
}

int main()
{
    int n, number1, number2;

    while(1) {
        printf("Enter two numbers (Or two 0s to exit): ");
        scanf("%d %d", &number1, &number2);

        if (number1 == 0 && number2 == 0) {
            printf("Program Terminated.\n");
            break;
        }
        printf("\tEnter \n1 for addition\n2 for subtraction\n3 for multiplication\n4 for division\n");
        scanf("%d", &n);

        if (n == 1) {
            add(number1, number2);
        }
        else if (n == 2) {
            sub(number1, number2);
        }
        else if (n == 3) {
            mul(number1, number2);
        }
        else if (n == 4) {
            divi(number1, number2);
        }
        else {
            printf("Unknown Operation\n");
        }
    }

    return 0;
}
