/*
ch5 ex 6

c <> F converter
*/

#include "../std_lib_facilities_orig.h"

double ctof (double c)
{
    int f = 0;
    double cmin = -273.15;
    
    f = 1.8*c + 32;
    
    if (c <= cmin )
    {
        cerr << "ERROR: attempting to convert temp lower than absolute zero" << '\n';
    }
    
    return f;
}

double ftoc (double f)
{
    int c = 0;
    double fmin = -460.3;

    c = (f -32) * (5/9);
    
    if (f <= fmin )
    {
        cerr << "ERROR: attempting to convert temp lower than absolute zero" << '\n';
    }
    
    return c;
}

int main()
{
    try
    {
        double InTemp = 0;
        double OutTemp = 0;
        char InUnit = ' ';
        char OutUnit = ' ';
        
        cout << "input temp and unit to (C or F) to convert: \n";
        cin >> InTemp >> InUnit;

        if (InUnit=='c' || InUnit=='C') {
        OutTemp = ctof(InTemp);
        OutUnit = 'F';
        }
        else if (InUnit=='f' || InUnit=='F') {
        OutTemp = ftoc(InTemp);
        OutUnit = 'C';
        }
        else{
            error("Illegal unit, must be C or F");
        } 

        cout << InTemp << ' ' << InUnit << " is " << OutTemp << " " << OutUnit << '\n';
        keep_window_open(); 
        return 0;
    }
    catch (exception& e) {
        cerr << "Error: " << e.what() << endl;
        return 1;
    }
    catch (...) {
        cerr << "Blerg: Unknown Exception!\n";
        keep_window_open();
        return 2;
    }
}