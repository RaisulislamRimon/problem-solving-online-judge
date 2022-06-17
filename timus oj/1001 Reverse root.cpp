//------------------------------------------------
//   1001 - Timus OJ                             |
//                                               |
// this is just a demo                           |
// this code is not yet accepted                 |
// this code is just for understanding           |
//------------------------------------------------

#include <iostream>
#include <stdio.h>
#include <math.h>
#include <vector>

using namespace std;

int main() {
    vector <long long> V;
    long long a;
    while (scanf("%lld", &a) != EOF) {
        V.push_back(a);
    }
    for (int i = V.size() - 1; i >= 0; i--) {
        printf(".4lld\n", sqrt(V[i]));
    }

    return 0;
}
