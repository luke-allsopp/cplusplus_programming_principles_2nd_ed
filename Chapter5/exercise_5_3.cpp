/*
ch5 ex 2 - 5 

c <> k converter
*/

#include "../std_lib_facilities_orig.h"

double ctok (double c)
{
    int k = 0;
    double cmin = -273.15;
    
    k = c + 273.15;
    
    if (c <= cmin )
    {
        cerr << "ERROR: attempting to convert temp lower than absolute zero" << '\n';
    }
    
    return k;
}

double ktoc (double k)
{
    int c = -273.15;
    double kmin = 0;
    
    c = k - 273.15;
    
    if (k <= kmin )
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
        
        cout << "input temp and unit to (C or K) to convert: \n";
        cin >> InTemp >> InUnit;

        if (InUnit=='c' || InUnit=='C') {
        OutTemp = ctok(InTemp);
        OutUnit = 'K';
        }
        else if (InUnit=='k' || InUnit=='K') {
        OutTemp = ktoc(InTemp);
        OutUnit = 'C';
        }
        else{
            error("Illegal unit, must be C or K");
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