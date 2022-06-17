
#include <bits/stdc++.h>

using namespace std;

int main()
{
    double moneyBag;
    cin >> moneyBag;

    int fullCoins = moneyBag * 100;

    int onlyNotes = fullCoins / 100;
    int onlyCoins = fullCoins % 100;

    int notes[6] = {100, 50, 20, 10, 5, 2};
    cout << "NOTAS:" << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << onlyNotes / notes[i] << " nota(s) de R$ " << notes[i] << ".00" << endl;
        onlyNotes = onlyNotes % notes[i];
    }

    onlyCoins = onlyNotes * 100 + onlyCoins;

    int coins[6] = {100, 50, 25, 10, 5, 1};
    cout << "MOEDAS:" << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << fixed << setprecision(2);
        cout << onlyCoins / coins[i] << " moeda(s) de R$ " << coins[i]/100.00 << endl;
        onlyCoins = onlyCoins % coins[i];
    }

    return 0;
}
