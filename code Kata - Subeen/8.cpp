#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

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

int div(int n1, int n2)
{
    return n1 / n2;
}

int main()
{
    int number1, number2, result;
    char operation[10];

    while(1)
    {
        printf("Enter two numbers (or two 0s two exit) : ");
        scanf("%d %d", &number1, &number2);

        if (number1 == 0 && number2 == 0)
        {
            printf("Program Terminated\n");
            break;
        }
        printf("Enter any of the following command\n");
        printf("\tadd for addition\n\tsub for subtraction\n\tmul for multiplication\n\tdiv for division :\n");
        scanf("%s", operation);

        if (!strcmp(operation, "add"))
        {
            result = add(number1, number2);
        }
        else if(!strcmp(operation, "sub"))
        {
            result = sub(number1, number2);
        }
        else if(!strcmp(operation, "mul"))
        {
            result = mul(number1, number2);
        }
        else if(!strcmp(operation, "div"))
        {
            if(number2 == 0)
            {
                printf("Can not divide by zero\n");
                continue;
            }
            result = div(number1, number2);
        }
        else
        {
            printf("Unknown Command\n");
            continue;
        }
        printf("Result = %d\n", result);
    }

    return 0;
}
