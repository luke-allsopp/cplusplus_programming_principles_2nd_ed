/*ch 5 drill ex 1
  original code snippet:
  Cout << "Success!\n";  
   */

#include "../std_lib_facilities_orig.h"

int main()
try {
    cout << "Success!\n"; //lower case c in cout
    keep_window_open();
    return 0;
}
catch (exception& e) {
    cerr << "error: " << e.what() << '\n';
    keep_window_open();
    return 1;
}
catch (...) {
    cerr << "Blerg: Unknown Exception!\n";
    keep_window_open();
    return 2;
}