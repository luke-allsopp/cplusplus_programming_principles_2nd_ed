//Chapter 3 Exercise 6:

#include"../std_lib_facilities.h"

int main()
{
    cout << "Exercise 3.6 - Int sorting: \n"
         << "please enter value 1:\n";

    int val1, val2, val3;

    cin >> val1;
    cout << "please enter value 2:\n";
    cin >> val2;
    cout << "please enter value 3:\n";
    cin >> val3;

    int max = 0;
    int mid = 0;
    int min = 0;

    if (val1 < val2 && val1 < val3) {

        min = val1;

        if (val2 < val3) {
            mid = val2;
            max = val3;
            cout<<"In order1:"<<min<<" "<<mid<<" "<<max<<'\n'; 
        } else {
            mid = val3;
            max = val2;
            cout<<"In order2:"<<min<<" "<<mid<<" "<<max<<'\n';
        }

    } else if (val2 < val3){

        min = val2;

        if (val1 < val3) {
            mid = val1;
            max = val3;
            cout<<"In order3:"<<min<<" "<<mid<<" "<<max<<'\n';
        } else {
            mid = val3;
            max = val1;
            cout<<"In order4:"<<min<<" "<<mid<<" "<<max<<'\n';
        }

    } else {

        min = val3;

        if (val1 < val2) {
            mid = val1;
            max = val2;
            cout<<"In order5:"<<min<<" "<<mid<<" "<<max<<'\n';
        } else {
            mid = val2;
            max = val1;
            cout<<"In order6:"<<min<<" "<<mid<<" "<<max<<'\n';
        }
    }


    return 0;
}