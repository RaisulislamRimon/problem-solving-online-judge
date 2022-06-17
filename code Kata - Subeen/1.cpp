#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    // output : Bangladesh
    printf("Bangladesh");
    ///cout << "Bangladesh";

    // output : Bangladesh (followed by newline)
    printf("Bangladesh\n");
    ///cout << "Bangladesh" << "\n";

    // output : Bangladesh, newline, Bangladesh, newline
    printf("Bangladesh\nBangladesh\n");
    ///cout << "Bangladesh\nBangladesh\n";

    // output : Bangladesh tab character Bangladesh, why only two Bangladesh ?
    printf("Bangladesh\rBangladesh\tBangladesh\n");
    ///cout << "Bangladesh\rBangladesh\tBangladesh\n";

    return 0;
}
