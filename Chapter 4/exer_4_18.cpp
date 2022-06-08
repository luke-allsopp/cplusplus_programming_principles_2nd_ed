#include"../std_lib_facilities.h"

/*
quadratic solver

ax^2 + bx + c = 0

x = (-b +- sqrt((b^2)-(4ac)))/2a

if discrim (section under sqrt) is >0 real aznd 2 diff roots, if =0, real and same roots, if <0 diff complex roots

*/

int main()
{
    float a, b, c, x1, x2, discrim, realPart, imagPart;
    cout << "Input a, b, c coefficients for a quadratic (ax^2 + bx + c = 0):\n";
    
    while (cin >> a >> b >> c)
    {
        discrim = b*b - 4*a*c;
    
        if (discrim > 0) {
            x1 = (-b + sqrt(discrim)) / (2*a);
            x2 = (-b - sqrt(discrim)) / (2*a);
            cout << "Roots are real and different. \n";
            cout << "x1 = " << x1 << '\n';
            cout << "x2 = " << x2 << '\n';
        }else if (discrim == 0) {
            cout << "Roots are real and same. \n";
            x1 = -b/(2*a);
            cout << "x1 = x2 =" << x1 << '\n';
        }else {
            realPart = -b/(2*a);
            imagPart =sqrt(-discrim)/(2*a);
            cout << "Roots are complex and different.\n";
            cout << "x1 = " << realPart << "+" << imagPart << "i\n";
            cout << "x2 = " << realPart << "-" << imagPart << "i\n";
        }
    }
    

    return 0;
}