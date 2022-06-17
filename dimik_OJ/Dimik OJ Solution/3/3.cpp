// 3 -  DIMIK OJ
// solved

#include <iostream>

using namespace std;

int main()
{


    for (int i = 1000; i >= 1; i--)
    {
        cout << i << "\t";
        if ((i - 1) % 5 == 0)
        {
            cout << "\n";
        }
    }

    return 0;
}
