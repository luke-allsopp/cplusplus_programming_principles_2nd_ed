//Exercise 6-7 decompose digit into integers, up to thousands

#include"../std_lib_facilities_orig.h"

int main() {
    string numStr;

    // Prompt user for input
    cout << "Enter a number with up to 4 digits: \n";
    cout << "> ";
    cin >> numStr;

    // Check if input is a valid integer
    for (char c : numStr) {
        if (!isdigit(c)) {
            cout << "Invalid input: not a number";
            return 1;
        }
    }

    // Convert number string to integer
    int num = 0;
    for (char c : numStr) {
        num = num * 10 + (c - '0');
    }


    // Output number as combination of ones, tens, hundreds, and thousands
    cout << numStr << " is ";
    if (num >= 1000) {
        cout << (num / 1000) << " thousands";
        num %= 1000;
        if (num > 0) cout << " and ";
    }
    if (num >= 100) {
        cout << (num / 100) << " hundreds";
        num %= 100;
        if (num > 0) cout << " and ";
    }
    if (num >= 10) {
        cout << (num / 10) << " tens";
        num %= 10;
        if (num > 0) cout << " and ";
    }
    if (num > 0) {
        cout << num << " ones\n";
    }

    return 0;
}
