#include"../std_lib_facilities.h"

/*emperor wants to thank the inventor of chess, gets 1 wish:
the inventor asked for 1 grain of rice for the 1st chess square, 2 for the 2nd, 4 for the 3 and so on
doubling for each for the 64 squares
calcluate 64 squares worth of rice */
int main()
{
	int square = 1;
	double rice = 1;
	int target = 0;
	   
	cout << "64 Squares worth of rice is: \n";
	    
	while ( square < 64 ) 
    {
	  	rice *= 2;
        square += 1;
	}
	    
        cout << "# of grains of rice: " << rice << " chess square #: " << square << '\n';
}