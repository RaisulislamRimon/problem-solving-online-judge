#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double number, total = 0;
    int i, total_positive_count = 0;

    for (i = 1; i <= 6; i++) {
        cin >> number;

        if (number >= 0) {
            total_positive_count++;
            total += number;
        }
    }

    cout << total_positive_count << " valores positivos\n";
    cout << fixed << setprecision(1) << total / total_positive_count << "\n";

    return 0;
}
