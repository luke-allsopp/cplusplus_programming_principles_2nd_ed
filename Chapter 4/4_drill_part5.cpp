//Chapter 4 Drill part 5

#include"../std_lib_facilities.h"

int main()
{
    double val1, val2;
    double larger, smaller, diff;
    constexpr double mindiff = 0.01;

    cout << "Input 2 doubles seperated by space('|' to terminate): \n";

    while (cin >> val1 >> val2)
    {
        if (val1 > val2)
        {
            smaller = val2;
            larger = val1;
            diff = (larger - smaller);
            if (val1 != val2 && diff <= mindiff)
            {
                cout << "The Numbers are almost equal. \n\n"; 
            }
            cout << "Larger Value: " << larger << ", Smaller Value:" << smaller << " \n\n";
        }
        else if (val2 > val1)
        {
            smaller = val1;
            larger = val2;
            diff = (larger - smaller);
            if (val1 != val2 && diff <= mindiff)
            {
                cout << "The Numbers are almost equal. \n\n"; 
            }
            cout << "Larger Value: " << larger << ", Smaller Value:" << smaller << " \n\n";
        }
        else if (val1 == val2)
        {
            cout << "The Numbers are equal. \n\n"; 
        }
        
    }

    return 0;

}