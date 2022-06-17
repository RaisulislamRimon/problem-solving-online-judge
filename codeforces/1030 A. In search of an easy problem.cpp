#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int opinion[n];

    for (int i = 0; i < n; i++) {
        cin >> opinion[i];
    }

    int easy = 0;

    for (int i = 0; i < n; i++) {
        if (opinion[i] == 1)
            easy = 1;
    }

    if (easy == 0)
        cout << "Easy\n";
    else
        cout << "Hard\n";

    return 0;
}
