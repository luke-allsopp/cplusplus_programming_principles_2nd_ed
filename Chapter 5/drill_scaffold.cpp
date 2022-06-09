#include "../std_lib_facilities_orig.h"

int main()
try {
    //insert code here
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