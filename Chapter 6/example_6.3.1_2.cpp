#include"../std_lib_facilities_orig.h"

int main()
{
    cout << "Please enter expression (+,-,*,/ supported):\n";
    cout << "add an x to the end of the expression to (e.g., 1+2*3x): ";
    int lval = 0;
    int rval;
    cin >> lval;
    if (!cin) error ("no first operand given.");
    for (char op; cin >> op;) {
        if (op != 'x') cin >> rval;
        if (!cin) error ("no second operand given.");
        switch (op)
        {
        case '+':
            lval += rval;
            break;
        
        case '-':
            lval -= rval;
            break;

        case '/':
            lval /= rval;
            break;

        case '*':
            lval *= rval;
            break;

        default:
            cout << "Result: " << lval << '\n';
            keep_window_open();
            return 0;
        }
    }
    error ("Bad expression given, blerg");
    
}