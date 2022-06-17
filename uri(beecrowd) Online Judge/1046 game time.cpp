#include <iostream>

using namespace std;

int main()
{
    int start_time, end_time, result;

    cin >> start_time;
    cin >> end_time;

    if (start_time == end_time)
    {
        cout << "O JOGO DUROU " << 24 << " HORA(S)" << endl;
    }
    else if (start_time > end_time)
    {
        result = 24 - (start_time - end_time);
        cout << "O JOGO DUROU " << result << " HORA(S)" << endl;
    }
    if (start_time < end_time)
    {
        result = end_time - start_time;
        cout << "O JOGO DUROU " << result << " HORA(S)" << endl;
    }

    return 0;
}
