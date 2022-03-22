//Chapter 3 Exercise 11:

#include"../std_lib_facilities.h"

int main()
{
    int cent5, cent10, cent20, cent50, dol1, dol2;
    double total;

    cout << "Exercise 3.11:\n"
         << "Au change counter\n"
         << "How many 5c coins do you have: \n";
    cin >> cent5;
    cout << "How many 10c coins do you have: \n";
    cin >> cent10;
    cout << "How many 20c coins do you have: \n";
    cin >> cent20;
    cout << "How many 50c coins do you have: \n";
    cin >> cent50;
    cout << "How many $1 coins do you have: \n";
    cin >> dol1;
    cout << "How many $2 coins do you have: \n";
    cin >> dol2;

    total = (cent5 * 0.05)+(cent10 * 0.1)+(cent20 * 0.2)+(cent50 * 0.5)+(dol1)+(dol2 *2);

    cout << "Your total $ Value: $" << total << "\n";

    return 0;
}