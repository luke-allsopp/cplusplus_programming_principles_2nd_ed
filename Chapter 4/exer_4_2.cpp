#include"../std_lib_facilities.h"

int main()
{
    vector<double> temps;
    int count, median = 0;

    cout << "input some temperatures before ctrl d:\n";

    for (double temp; cin >> temp;)
    {
        temps.push_back(temp);
    }
    
    sort(temps.begin(),temps.end());

    int mid = temps.size() / 2;

    if (temps.size() % 2 == 0) {
        median = (temps[mid] + temps[mid - 1]) / 2;
    } else {
        median = temps[mid];
    }

    cout << "Median of temps entered: " << median << '\n\n';
}