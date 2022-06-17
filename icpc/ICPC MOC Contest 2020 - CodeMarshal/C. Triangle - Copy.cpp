#include <iostream>

using namespace std;

int main()
{
    int a, b, c;

    cin >> a >> b >> c;


    // if three sides with equal length == Equilateral Triangle
    if (a == b && b == c)
        cout << "Equilateral Triangle\n";


    // normal triangle == Bad Triangle
    else if (a != b && b != c && a != c)
        cout << "Bad Triangle\n";


    // if two sides with equal length == Isosceles Triangl
    else
        cout << "Isosceles Triangle\n";


    return 0;
}
