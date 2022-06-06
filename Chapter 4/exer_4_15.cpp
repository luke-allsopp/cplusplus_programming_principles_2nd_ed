#include"../std_lib_facilities.h"

/*
find all prime numbers from 1 - maxvalue
*/
bool IsPrime(int n)
{
    if (n == 2 || n == 3)
        return true;

    if (n <= 1 || n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }

    return true;
}

int main()
{
    vector<int>primes;
    int maxval = 0;
    cout << "From 1, how many primes would you like?\n";
    cin >> maxval;
    cout << "first " << maxval << " primes are:\n";

    int j = 1;

    while(primes.size() <= (maxval-1))
    {          
        if (IsPrime(j) == 1)
        {
            primes.push_back(j);
        }
        j++;
    }

    for (int k = 0; k < primes.size(); k++)
    {
        cout << primes[k] << '\n';
    }
    
}