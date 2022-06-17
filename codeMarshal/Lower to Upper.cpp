/**-----------------------------------------------------------------------------------
 MD RAISUL ISLAM RIMON, 21 MARCH, 2021, 11.34 AM
 PROBLEM LINK : https://algo.codemarshal.org/problems/556a0cb1a843fc851d47b4cd
 CodeMarshal  : Lower to Upper!
------------------------------------------------------------------------------------*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i, j, n;

    //--------------------------------------
    //  taking input of total test cases   |
    //--------------------------------------

    cin >> n;
    cin.ignore();

    //------------------------------------
    //  taking input of all strings      |
    //------------------------------------

    string s[n];

    ///int len[n];

    for (i = 0; i < n ; i++) {
        getline(cin, s[i]);
    }

    //---------------------------------------------------
    // convert all string from lowercase to uppercase   |
    //---------------------------------------------------

    for (i = 0; i < n; i++) {
        //-----------------------
        // now converting ...   |
        //-----------------------
        transform(s[i].begin(), s[i].end(), s[i].begin(), ::toupper);
        //------------------------------------------------------------
        // now printing all the strings from lowercase to uppercase  |
        //------------------------------------------------------------
        cout << "Case " << i + 1 << ": " << s[i] << endl;
    }

    //---------------------------
    //  end of the solution     |
    //---------------------------

    return 0;
}
