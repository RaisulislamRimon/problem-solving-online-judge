#include <iostream>

using namespace std;

int main()
{

    int n, input ;

    cin >> n;

    while (n--)
    //for (int i = 1; i <= n; i++)
    {
        cin >> input;

        if (input % 2 == 0)
        {
            cout << "even" << endl;
        }
        else
        {
            cout << "odd" << endl;
        }


    }


    return 0;
}
