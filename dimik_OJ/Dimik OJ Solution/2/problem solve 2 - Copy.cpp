#include <iostream>

using namespace std;

int main()
{
    int total, num[100000];

    cin >> total;

    for (int i = 0; i < total; i++ )
    {
        cin >> num[i];

        if (num[i] % 2 == 0)
            cout << "even\n";
        else
            cout << "odd\n";
    }

    return 0;
}
