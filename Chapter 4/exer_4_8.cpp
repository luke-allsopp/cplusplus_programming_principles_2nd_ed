#include"../std_lib_facilities.h"

/*emperor wants to thank the inventor of chess, gets 1 wish:
the inventor asked for 1 grain of rice for the 1st chess square, 2 for the 2nd, 4 for the 3 and so on
doubling for each for the 64 squares
calcluate how many squares needed to give:
- 1000 rice grains
- 1000000 grains
- 1000000000 grains 


in prog - giving shit results
*/

int square(double v)
{
    return v*v;
}

int main()
{
    double sum, x = 0;
    int prize1 = 1000;
    int prize2 = 1000000;
    int prize3 = 1000000000;

    cout << "square #:" << "  " << "rice for this square:" << "total rice:\n";

    for (int i = 1; i < 65; i++)
    {         
        sum += x = square(i);
        cout << i << "      " << x << "     " <<sum <<'\n';
    }

    return 0;    
}