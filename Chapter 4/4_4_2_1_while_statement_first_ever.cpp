//4.4.2.1 - calcultate and print a table of squares 0-99

#include"../std_lib_facilities.h"

int main()
{
    int i, j = 1;
    while (i<100)
    {
        j=i;
        cout<<i<<'\t'<<i*i<<'\n';
        ++i;
    }
    return 0;
}