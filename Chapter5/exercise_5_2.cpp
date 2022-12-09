/*

*/

#include "../std_lib_facilities.h"

double ctok (double c)
{
    int k = c + 273.15;
    return k; //error, should be return k, and ;
}

int main ()
{
    double c = 0;
    cout << "input Celcius to convert to Kelvin: \n";

    cin >> c;               //should be c, and the program should ask for Celcius
    double k = ctok(c);     //"c" incorrect, no ""
    cout << k << '\n';       // no Cout capitalization ,slash wrong way
}