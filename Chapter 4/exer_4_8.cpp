#include"../std_lib_facilities.h"

/*emperor wants to thank the inventor of chess, gets 1 wish:
the inventor asked for 1 grain of rice for the 1st chess square, 2 for the 2nd, 4 for the 3 and so on
doubling for each for the 64 squares
calcluate how many squares needed to give rice */
int main()
{
	int square = 1;
	int rice = 1;
	int target = 0;
	   
	cout << "How many grains do you want?\n";
	cin >> target;
	    
	while (rice < target) 
    {
	  	rice *= 2;
        square += 1;
	}
	    
        cout << "# of grains of rice: " << rice << " chess square #: " << square << '\n';
}
