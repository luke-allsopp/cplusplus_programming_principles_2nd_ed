//Chapter 4 Drill part 2

#include"../std_lib_facilities.h"

int main()
{
    int val1, val2;

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
        
    }

    return 0;

}