#include <iostream>
using namespace std;
int main()
{
    int a[20], n, i, j;

    cin >> a[0];
    while (a[0] != -1)
    {
        for (n = 1; ; n++)
        {
            cin >> a[n];
            if (a[n] == 0)
            {
                break;
            }
        }
        int count = 0;
        for (i = 0; i < n - 1; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                if (a[i] * 2 == a[j] || a[j] * 2 == a[i])
                {
                    count++;
                }
            }
        }
        cout << count << endl;
        cin >> a[0];
    }

    return 0;
}
