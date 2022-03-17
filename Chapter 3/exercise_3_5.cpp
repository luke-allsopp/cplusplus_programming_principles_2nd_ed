//Chapter 3 Exercise 4:

#include"../std_lib_facilities.h"

int main()
{
    cout << "Exercise 3.4 (floating point supported) -  \n"
         << "Please input val 1 :\n";

    double val1, val2 = 0;
    double val3 = 0;

    cin >> val1;

    cout << "Please input val 2:\n";

    cin >> val2;

    if (val1 < val2){
        val3 = val2 / val1;
        cout << val1 << " is the smaller value, \n"
             << val2 << " is the larger value, \n";
    }
    
    if (val2 < val1){
        val3 = val1 / val2;
        cout << val2 << " is the smaller value, \n"
             << val1 << " is the larger value, \n";
    }

    cout << "The sum is: " << val1 + val2 << "\n"
         << "The difference is: " << val2 - val1 << "\n"
         << "The product is: " << val1 * val2 << "\n"
         << "The ratio is: " << val3 <<"\n";

    return 0;
}