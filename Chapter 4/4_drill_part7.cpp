//Chapter 4 Drill part 7

#include"../std_lib_facilities.h"

bool unitCheck(string unit)
{
    bool unit_pass = false;
    vector<string> correct_units = { "cm", "m", "in", "ft" };

    for (string u : correct_units)
        if (u == unit)
            unit_pass = true;

    return unit_pass;
}

double getLength(double value, string unit)
{
    constexpr double cm = 0.01;
    constexpr double in = 0.0254;
    constexpr double ft = 0.3048;

    double convertedLength = 0;

    if (unit == "cm")
    {
        convertedLength = value * cm;
    }else if (unit == "in")
    {
        convertedLength = value * in;
    }else if (unit == "ft")
    {
        convertedLength = value * ft;
    }else if (unit == "m")
    {
        convertedLength = value;
    }else
    {
        cout << "unspecified error\n\n";
        return -1;
    }
    
    return convertedLength;
}

int main()
{
    double value,lengthMeters,  countLength;
    double sumLength,larger = 0;
    double smaller = 32406548613010;  //big number to init. tbd better way to do this
    vector<double> inputValues;
    string unit;

    cout << "Input units (cm, m, in, ft only) \nto add to memory and find min / max ('|' to terminate): \n";

    while (cin >> value >> unit)
    {
        if (value == '|')
        {
            break;
        }

        if (!unitCheck(unit))
        {
            cout << "Unit Error, please input a valid unit. ";
        }
        
        else
        {
            lengthMeters = getLength(value, unit);

            inputValues.push_back(lengthMeters);

            for (int i = 0; i < inputValues.size(); ++i){
                if (inputValues[i] > larger){ 
                    larger = inputValues[i]; 
                    }
                if (inputValues[i] < smaller){ 
                    smaller = inputValues[i]; 
                    }
                }
            sumLength += lengthMeters;
            countLength += 1;
        }
           
    }
    //for testing only output inputs unsorted:
    cout << "Output (in m, unsorted):\n";
    for (double m : inputValues){
        cout << m << '\n';
    }

    sort(inputValues.begin(),inputValues.end());
    cout << "Output (in m, sorted):\n";
    for (double m : inputValues){
        cout << m << '\n';
    }

    cout << "Maximum value entered (in m) = " << larger << "m" << '\n';
    cout << "Minimum value entered (in m) = " << smaller << "m" << '\n';
    cout << "avg value entered (in m) = " << sumLength / countLength << "m" << '\n';
    return 0;

}