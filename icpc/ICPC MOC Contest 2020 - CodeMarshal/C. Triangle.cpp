#include <iostream>

using namespace std;

int main()
{
    int a, b, c;

    cin >> a >> b >> c;

    // if three sides with equal length == Equilateral Triangle

    if (a == b && b == c)
    {
        cout << "Equilateral Triangle\n";
    }

    // if two sides with equal length == Isosceles Triangle

    else if ((a == b && b != c) || (a == c && a != b) || (b == c && a != b))
    {
        cout << "Isosceles Triangle\n";
    }

    // normal triangle == Bad Triangle

    else
    {
        cout << "Bad Triangle\n";
    }

    return 0;
}
