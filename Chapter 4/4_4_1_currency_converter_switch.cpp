//chapter 4.4.1 try-this
// switch statement
// convert yen, kroner, pound, usd to aud

#include"../std_lib_facilities.h"

int main()
{
    constexpr double yenAud = 0.11;
    constexpr double kroAud = 0.2;
    constexpr double pouAud = 1.76;
    constexpr double usdAud = 1.33;
    double Cur = 1; 
    char Unit = ' ';

    cout<<"Please enter a currency amount followed by the the currency denomination (k = kroner, y = yen, p = pound, u = usd) to conver to $AUD:\n\n";
    cin>>Cur>>Unit;

    switch (Unit)
    {
    case 'y':
        cout<<"$"<<Cur<<" yen is: $"<<Cur*yenAud<<" AUD\n\n";
        break;
    case 'k':
        cout<<"$"<<Cur<<" kroner is: $"<<Cur*kroAud<<" AUD\n\n";
        break;
    case 'p':
        cout<<"$"<<Cur<<" pound is: $"<<Cur*pouAud<<" AUD\n\n";
        break;
    case 'u':
        cout<<"$"<<Cur<<" USD is: $"<<Cur*usdAud<<" AUD\n\n";
        break;
    default:
        cout<<"unit input error - retry";
        break;
    }

    return 0; 
    
}