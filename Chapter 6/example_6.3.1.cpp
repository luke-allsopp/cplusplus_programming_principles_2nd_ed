#include"../std_lib_facilities_orig.h"

int main()
{
    cout << "Please enter expression (+,- only):";
    int lval = 0;
    int rval, res;
    char op;
    cin >> lval >> op >> rval;

    if (op == '+')
    {
        res = lval + rval;
    } else if (op == '-')
    {
        res = lval - rval;
    }

    cout << "Result: " << res << '\n';
    keep_window_open();
    
    return 0;
}