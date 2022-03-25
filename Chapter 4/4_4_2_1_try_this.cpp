//4.4.2.1 - print int values for all char

#include"../std_lib_facilities.h"

int main()
{
    int i = 0;
    char c = 'a';

    while (i<128)
    {
        cout<<char(c+i)<<'\t'<<i<<'\n';
        ++i;
    }
    
    return 0;
}