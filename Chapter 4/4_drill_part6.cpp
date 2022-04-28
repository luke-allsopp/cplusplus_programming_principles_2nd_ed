//Chapter 4 Drill part 6

#include"../std_lib_facilities.h"

int main()
{
    double value;
    double larger = 0;
    double smaller = 32406548613010;  //big number to init tbd better way to do this
    vector<double> inputValues;

    cout << "Input numbers to add to memory and find min / max ('|' to terminate): \n";

    while (cin >> value)
    {
        if (value == '|')
        {
            break;
        }
        
        inputValues.push_back(value);

        for (int i = 0; i < inputValues.size(); ++i){
            if (inputValues[i] > larger){ 
                larger = inputValues[i]; 
                }
            if (inputValues[i] < smaller){ 
                smaller = inputValues[i]; 
                }
            }
    }

    cout << "Maximum value entered = " << larger << '\n';
    cout << "Minimum value entered = " << smaller << '\n';

    return 0;

}