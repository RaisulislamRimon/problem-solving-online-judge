#include <iostream>
using namespace std;

int main()
{
    double num[6];
    int total_positive_count = 0;

    for (int i = 0; i < 6; i++) {
        cin >> num[i];
    }

    for (int i = 0; i < 6; i++) {
        if (num[i] >= 0)
            total_positive_count++;

    }

    cout << total_positive_count << " valores positivos" << "\n";


    return 0;
}
