//chapter 4.4.1.1 try-this
// inch / centi converter -> currency converter
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

    if (Unit=='y')
    {
        cout<<"$"<<Cur<<" yen is: $"<<Cur*yenAud<<" AUD\n\n";
    }else if (Unit=='k')
    {
        cout<<"$"<<Cur<<" kroner is: $"<<Cur*kroAud<<" AUD\n\n";
    }else if (Unit=='p')
    {
        cout<<"$"<<Cur<<" pound is: $"<<Cur*pouAud<<" AUD\n\n";
    }else if (Unit=='u')
    {
        cout<<"$"<<Cur<<" USD is: $"<<Cur*usdAud<<" AUD\n\n";
    }else
    {
        cout<<"unit input error - retry";
    }
    
    return 0; 
    
}