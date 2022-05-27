#include"../std_lib_facilities.h"

//basic calculator, 3 inputs; 2 double values with an operator (+,-,*,/)

int main()
{
   
    cout << "Basic Calculator\nPlease input value 1, operator, value 2, and hit 'Enter':\n";

    double val1, val2  {0};
    char oper {' '};

    while (cin >> val1 >> oper >> val2)
    {
        switch (oper)
        {
            case '+':
                cout << "The sum of " << val1 << " and " << val2 
                        << " is " << val1+val2 << '\n';
                break;
            
            case '-':
                cout << "The difference of " << val1 << " and " << val2 
                        << " is " << val1-val2 << '\n';
                break;

            case '*':
                cout << "The multiplication of " << val1 << " by " << val2 
                        << " is " << val1*val2 << '\n';
                break;
            
            case '/':
                cout << "The division of " << val1 << " by " << val2 
                        << " is " << val1/val2 << '\n';
                break;
            
            default:
                cout << "Blerg, operator supplied is not supported!\n";
                break;
        }
        
        cout << "Basic Calculator\nPlease input value 1, (+,-,*,/), value 2, and hit 'Enter':\n";
    }
    
    return 0;
}