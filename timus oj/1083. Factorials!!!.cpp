#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num;

    string exclamatory_sign;

    cin >> num;

    cin >> exclamatory_sign;

    int exclamatory_sign_size = exclamatory_sign.size();

    int result = 1;

    while (num > 1)
    {
        result = result * num;

        num = num - exclamatory_sign_size;
    }


    cout << result << endl;



    return 0;
}
