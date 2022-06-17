#include <stdio.h>

int main()
{
    //Read 2 variables, named A and B
    //The input file will contain 2 integer numbers.
    
    int A, B, X;
    
    //scanf -- for User input 
    
    scanf("%d %d", &A, &B);
    
    /* Read 2 variables, named A and B and make the sum of these two variables, assigning its result to the variable X.  */
    //Print the letter X (uppercase) with a blank space before and after the equal signal followed by the value of X
    
    
    X = A + B;

    printf("X = %d\n", X);

    return 0;

}
