#include"../std_lib_facilities.h"

//input 1-10 in prose, output int

int main()
{


    vector<string>numProse={"one","two","three","four","five","six","seven","eight","nine","ten"};
    vector<int>numDigit={1,2,3,4,5,6,7,8,9,10};
    int read;
   
    cout << "type out number in prose ("<<numDigit[0]<<"-"<<numDigit[9]<<")\nThen hit 'Enter':\n";

    
    while (cin >> read){
	
        for (int i = 0; i < numDigit.size(); i++)
        {
            if (numDigit[i]==read){
                cout << " " << numProse[i];
            }
        }
    }
    return 0;
}