#include"../std_lib_facilities.h"

int main()
{
    vector<double> dists;
    double mean, max, min, sum = 0;

    cout << "input some route lengths from <City A> to <City B>, then EOF:\n";

    for (double dist; cin >> dist;)
    {
        dists.push_back(dist);
    }
    
    sort(dists.begin(),dists.end());

    min = dists[0];
    max = dists[dists.size() - 1];
    
    for (double x : dists)
    {
        sum += x;
    }
    
    cout << "shortest route = " << min << '\n';
    cout << "longest route = " << max << '\n';
    cout << "route mean = " << sum/dists.size() << '\n';
    
    return 0;
}