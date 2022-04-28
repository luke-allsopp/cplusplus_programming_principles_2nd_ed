//Chapter 4 Drill

#include"../std_lib_facilities.h"

int main()
{
    int val1, val2;

    cout << "Input 2 ints seperated by space to print('|' to terminate): \n";

    while (cin >> val1 >> val2)
    {
        cout << "Entered values: " << val1 << " " << val2 << " \n\n";
    }

    return 0;

}