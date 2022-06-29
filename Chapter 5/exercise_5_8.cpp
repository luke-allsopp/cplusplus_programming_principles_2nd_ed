/*
input N ints, then sum
error if enter value after N
use vector to store ints
*/
#include"../std_lib_facilities_orig.h"

int main()
    try {
        vector<int> vals;
        int val = 0;
        int n = 0;
        int sum = 0;

        cout << "input the number of values you want to sum:\n";
        cin >> n;

        if (n < 1) error("You have to sum at least one value!");
        cout << "input some integers (press '|' to stop)\n";
        while (cin>>val)
            vals.push_back(val);

        if (vals.size() < n) error("You wanted to sum more values than you entered intially", n);
    
        cout << "The sum of the first ";
        if (n > 1) cout << n;

        cout << " number";
        if (n > 1) cout << 's';

        cout << " ( ";
        for (int i = 0; i<n; ++i) {
            sum += vals[i];
            cout << vals[i] << ' ';
        }
        cout << ") is " << sum << ".\n";

        return 0;
    }

    catch (exception& e) {
        cerr << "Error: " << e.what() << endl;
        keep_window_open();
        return 1;
    }
    
    catch (...) {
        cerr << "Unknown exception!\n";
        return 2;
    }