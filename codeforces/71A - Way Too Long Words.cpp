#include <iostream>

using namespace std;

int main()
{
    int n;

    cin >> n;

    string s;

    for (int i = 0; i < n; i++)
    {
        cin >> s;

        if (s.length() <= 10)
        {
            cout << s << endl;
        }
        else
        {
            int stringFirst = s.length() - 2;

            cout << s[0] << stringFirst << s[s.length() - 1] << endl;
        }
    }

    return 0;
}
