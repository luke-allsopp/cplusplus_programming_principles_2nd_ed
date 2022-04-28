//Chapter 4 Drill part 4

#include"../std_lib_facilities.h"

int main()
{
    double val1, val2;

    cout << "Input 2 ints seperated by space to print('|' to terminate): \n";

    while (cin >> val1 >> val2)
    {
        if (val1 > val2)
        {
            cout << "Larger Value: " << val1 << ", Smaller Value:" << val2 << " \n\n";
        }
        else if (val2 > val1)
        {
            cout << "Larger Value: " << val2 << ", Smaller Value:" << val1 << " \n\n";
        }
        else if (val1 == val2)
        {
            cout << "The Numbers are equal. \n\n"; 
        }
        
    }

    return 0;

}