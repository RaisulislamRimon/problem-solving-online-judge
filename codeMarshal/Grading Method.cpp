#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;

int main()
{
    long long n, i, result[100001];

    cout << "Enter Total Student : ";
    cin >> n;

    cout << "Enter ";
    for (i = 1; i <= n; i++)
    {
        cout <<  "Student " << i << ": ";
        cin >> result[i];
    }
    for (i = 1; i <= n; i++)
    {
        if (result[i] >= 90 && result[i] <= 100)
        {
            cout << "Student " << i << ": " << "A+\n";
        }
        else if (result[i] >= 80 && result[i] <= 89)
        {
            cout << "Student " << i << ": " << "A\n";
        }
        else if (result[i] >= 70 && result[i] <= 79)
        {
            cout << "Student " << i << ": " << "A-\n";
        }
        else if (result[i] >= 60 && result[i] <= 69)
        {
            cout << "Student " << i << ": " << "B+\n";
        }
        else if (result[i] >= 50 && result[i] <= 59)
        {
            cout << "Student " << i << ": " << "B-\n";
        }
        else if (result[i] >= 40 && result[i] <= 49)
        {
            cout << "Student " << i << ": " << "C\n";
        }
        else if (result[i] >= 33 && result[i] <= 39)
        {
            cout << "Student " << i << ": " << "D\n";
        }
        else if (result[i] >= 0 && result[i] <= 32)
        {
            cout << "Student " << i << ": " << "F\n";
        }
        else {
            cout << "Student " << i << ": " << "Invalid Marks ." << "\n";
        }
    }


    getch();

    return 0;
}
