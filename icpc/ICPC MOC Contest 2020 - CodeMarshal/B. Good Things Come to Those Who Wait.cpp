#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int total, i;

    cin >> total; // total input == 3

    int test[total]; // test input == 2 , 1 , 2

    int totalTest[200];

    for (i = 0; i < total; i++)
    {
        cin >> test[i];

        while(test[i]--)
        {
            cin >> totalTest[test[i]];
        }


    }

/*
    for (int i = 0; i < total; i++)
    {
        cout <<  test[i] << endl;

        cout << totalTest[test[i]] << endl;

    }
*/

    for (int i = 0; i < total; i++)
    {
        int result = totalTest[test[i]] * totalTest[test[i]];
        cout << "Case " << i + 1 << ": " << result << endl;

    }



    return 0;
}
