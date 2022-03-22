//Chapter 3 Exercise 10:

#include"../std_lib_facilities.h"

int main()
{
    cout << "Exercise 3.10:\n"
         << "Basic Calculator (X) +,-,*,/ (Y)\n"
         << "Please input first value: \n";

    double num1, num2, ans;
    string oper = "";
      
    cin >> num1;
    cout << "Please input operator: \n";
    cin >> oper;
    cout << "Please input second value: \n";
    cin >> num2;

    if (oper == "+")
    {
        ans = num1 + num2;
        cout << num1 << " + " << num2 << " = " << ans << "\n";
    }else if (oper == "-")
    {
        ans = num1 - num2;
        cout << num1 << " - " << num2 << " = " << ans << "\n";
    }else if (oper == "*")
    {
        ans = num1 * num2;
        cout << num1 << " * " << num2 << " = " << ans << "\n";
    }else if (oper == "/")
    {
        ans = num1 / num2;
        cout << num1 << " / " << num2 << " = " << ans << "\n";
    }else{
        cout << " input/read error, reinput. \n";
        return -1;
    }
    
    return 0;
}