#include"../std_lib_facilities.h"

//basic calculator, 3 inputs; 2 double values with an operator (+,-,*,/)

int main()
{
 
    cout << "Basic Calculator\nPlease input value 1, operator, value 2, and hit 'Enter':\nNote, only enter 1-10 or prose versions.\n";

    string inp1, inp2 {' '};
    double val1, val2  {0};
    char oper {' '};
    vector<string>numProse={"one","two","three","four","five","six","seven","eight","nine","ten"};
    vector<string>numProse2={"1","2","3","4","5","6","7","8","9","10"};
    vector<int>numDigit={1,2,3,4,5,6,7,8,9,10};

    while (cin >> inp1 >> oper >> inp2)
    {
        for (int i = 0; i < numProse.size(); i++)
        {  
            if (inp1 == numProse[i] || inp1 == numProse2[i])
            {
                val1 = numDigit[i];
            }
        
            if (inp2 == numProse[i] || inp2 == numProse2[i])
            {
                val2 = numDigit[i];
            }
        }
        
        switch (oper)
        {
            case '+':
                cout << "The sum of " << val1 << " and " << val2 
                        << " is " << val1+val2 << '\n\n';
                break;
            
            case '-':
                cout << "The difference of " << val1 << " and " << val2 
                        << " is " << val1-val2 << '\n\n';
                break;

            case '*':
                cout << "The multiplication of " << val1 << " by " << val2 
                        << " is " << val1*val2 << '\n\n';
                break;
            
            case '/':
                cout << "The division of " << val1 << " by " << val2 
                        << " is " << val1/val2 << '\n\n';
                break;
            
            default:
                cout << "Blerg, operator supplied is not supported!\n";
                break;
        }
        
        cout << "Basic Calculator\nPlease input value 1, (+,-,*,/), value 2, and hit 'Enter':\n";
    }

    
    return 0;
}