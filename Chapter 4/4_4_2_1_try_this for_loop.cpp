//4.4.2.1 - print int values for all char

#include"../std_lib_facilities.h"

int main()
{
    char c = 'a';
    cout<<"Char:"<<'\t'<<"int value:"<<'\n';

    for (c = 'a'; c <= 'z'; c++)
    {
        cout<<c<<'\t'<<int(c)<<'\n';
    }
           
    return 0;
}