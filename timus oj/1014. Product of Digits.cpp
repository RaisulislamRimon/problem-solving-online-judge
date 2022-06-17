#include <iostream>

using namespace std;

int main()
{
    int num = 10;

    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            cout << i << num / i;
            break;
        }
    }
    cout << endl;



    return 0;
}
