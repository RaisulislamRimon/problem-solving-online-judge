#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int i; float f; char c; double d; long l;

    cin >> i >> l >> c >> f >> d;

    cout << i << endl << l << endl << c << endl;
    cout << fixed << setprecision(2) << f << endl;
    cout << fixed << setprecision(5) <<  d << endl;

    return 0;
}
