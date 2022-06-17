/* codeforces : problem no : 1 A . Theatre Square  */


#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    typedef double ll;
	ll a, b, c;

	cin >> a >> b >> c;

	ll row = ceil(a/c);
	ll column = ceil(b/c);

	long long ans = (long long)row * (long long)column;


	cout << ans << "\n";


	return 0;

}
