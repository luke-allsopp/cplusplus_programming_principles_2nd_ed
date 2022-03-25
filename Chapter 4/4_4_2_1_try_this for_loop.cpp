//4.4.2.1 - print int values for all char

#include"../std_lib_facilities.h"

int main()
{
    char c = 'a';

    for (int i = 0; i<128; i++)
    {
        cout<<char(c+i)<<'\t'<<i<<'\n';
    }
    
    return 0;
}