//Chapter 3 Exercise 9:

#include"../std_lib_facilities.h"

int main()
{
    cout << "Exercise 3.9:\n"
         << "stringify single digits ints:\n";

    int num;

    cin >> num;

    if (num>9)
    {
        cout << "not a number I know. try lower\n";
    }else if(num == 1)
    {
        cout << "one\n";
    }else if(num == 2)
    {
        cout << "two\n";
    }else if(num == 3)
    {
        cout << "Three\n";
    }else if(num == 4)
    {
        cout << "Four\n";
    }else
    {
        cout << "I'm not sure i'm not smart enough\n";
    }
    
    return 0;
}