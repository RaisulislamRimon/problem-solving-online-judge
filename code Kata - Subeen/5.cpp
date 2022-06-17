#include <iostream>
#include <stdio.h>

using namespace std;

/// this kata is to practice writing user defined function

void math_operations(int n1, int n2);

void math_operations(int n1, int n2)
{
    // addition
    printf("%d + %d = %d\n", n1, n2, n1 + n2);

    // subtraction
    printf("%d - %d = %d\n", n1, n2, n1 - n2);

    // multiplication
    printf("%d * %d = %d\n", n1, n2, n1 * n2);

    /// division
    if (n2 == 0) {
        printf("Can not divide by Zero\n");
        return;
    }
    printf("%d / %d = %d\n", n1, n2, n1 / n2);
}

int main()
{
    int number1, number2;

    while(1) {
        scanf("%d %d", &number1, &number2);

        if (number1 == 0 && number2 == 0) {
            cout << "\n\n\tProgram is quitting . . . \n\n\tTerima Kasih . . .\n\n";
            break;
        }
        math_operations(number1, number2);
    }

    return 0;
}
