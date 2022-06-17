#include <iostream>

using namespace std;

int main()
{
    int num, i, even = 0, odd = 0, positive = 0, negative = 0;
    ///Enter all numbers continuously (total 5 numbers) :
    for (i = 0; i < 5; i++) {
        cin >> num;
        ///checking positive or not
        if (num > 0)
            positive++;  /// counting total positive numbers
        ///checking even or not
        if (num % 2 == 0)
            even++;      /// counting total even numbers
        ///checking odd or not
        else
            odd++;       /// counting total odd numbers
        ///checking negative or not
        if (num < 0)
            negative++;  /// counting total negative numbers
    }
    cout << even     << " valor(es) par(es)"     << endl;   /// printing total counted even numbers
    cout << odd      << " valor(es) impar(es)"   << endl;   /// printing total counted odd numbers
    cout << positive << " valor(es) positivo(s)" << endl;   /// printing total counted positive numbers
    cout << negative << " valor(es) negativo(s)" << endl;   /// printing total counted negative numbers


    return 0;
}
/**
============================================================
sample input :           |       sample output :
----------------         |      ------------------
3                        |          3
10                       |
-2                       |
9                        |
-8                       |
============================================================

sample  input : 3 10 -2 9 -8
sample output : 3

sample  input : -5 0 -3 -4 12
sample output : 3 valor(es) par(es)
                2 valor(es) impar(es)
                1 valor(es) positivo(s)
                3 valor(es) negativo(s)
=============================================
  1066 Even, Odd, Positive and Negative.cpp
=============================================

need to submit

error solved

04 May 2021
10.44 pm
*/
