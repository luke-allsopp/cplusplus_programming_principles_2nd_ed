//Chapter 3 Exercise 8:

#include"../std_lib_facilities.h"

int main()
{
    cout << "Exercise 3.8 - odd/even: \n"
         << "please enter an integer:\n";

    int num = 0;

    cin >> num;

    if(num%2>0){
        cout << num << " is odd\n";
    }else{
        cout << num << " is even\n";
    }

    return 0;
}