#include <stdio.h>

int add(int n1, int n2)
{
    return n1 + n2;
}

int sub(int n1, int n2)
{
    return n1 - n2;
}

int mul(int n1, int n2)
{
    return n1 * n2;
}

int divi(int n1, int n2)
{
    return n1 / n2;
}


int main()
{
    int n, number1, number2, result;

    while(1) {
        printf("Enter two numbers(or two 0s to exit): ");
        scanf("%d %d", &number1, &number2);

        if (number1 == 0 && number2 == 0) {
            printf("Program Terminated\n");
            break;
        }

        printf("\tEnter \n1 for addition\n2 for subtraction\n3 for multiplication\n4 for division\n ");
        scanf("%d", &n);

        if (n == 1) {
            result = add(number1, number2);
        }
        else if (n == 2) {
            result = sub(number1, number2);
        }
        else if (n == 3) {
            result = mul(number1, number2);
        }
        else if (n == 4) {
            if (number2 == 0) {
                printf("Can not divide by zero.\n");
                continue;
            }
            result = divi(number1, number2);
        }
        else {
            printf("Unknown Operation.\n");
            continue;
        }
        printf("Result = %d\n", result);

    }


    return 0;
}
