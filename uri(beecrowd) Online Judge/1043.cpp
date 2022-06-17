#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float a, b, c;

    cin >> a >> b >> c;

    cout << fixed << setprecision(1);

    if (a + b > c && b + c > a && a + c > b)
    {
        cout << "Perimetro = " << (a + b + c) << endl;
    }
    else
    {
        cout << "Area = " << ((a + b) / 2) * c << endl;
    }

	return 0;
}
