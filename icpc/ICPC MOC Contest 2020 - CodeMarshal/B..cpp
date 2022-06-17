#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int total, i;

    cin >> total; // total input == 3

    int test[total]; // test input == 2 , 1 , 2

    int totalTest[total][100];

    for (i = 0; i < total; i++)
    {
        cin >> test[i];
    }

    for (i = 0; i < total; i++)
    {
        cout << test[i];
    }



    return 0;
}
