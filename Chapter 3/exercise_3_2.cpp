//Chapter 3 Exercise 2:

#include"../std_lib_facilities.h"

int main()
{
    cout << "Mile to Kilometer convertor -\n"
         << "please enter the Mile value you wish to convert:\n";
    double mile, km = 0;
    cin >> mile;
    km = mile * 1.609;
    cout << "There are: " << km << "KM's in " << mile << " Miles.\n";
    return 0;
}