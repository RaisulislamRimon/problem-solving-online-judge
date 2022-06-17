#include <iostream>

using namespace std;

int main()
{
    int num, i, total = 0;

    for (int i = 0; i < 5; i++) {
        cin >> num;
        if (num < 0) {
            num = -num;
        }
        if (num % 2 == 0) {
            total++;
        }
    }

    cout << total << " valores pares" << endl;


    return 0;
}
