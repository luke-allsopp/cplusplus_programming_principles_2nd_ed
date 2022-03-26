//4.4.2.1 - print int values for all char

#include"../std_lib_facilities.h"

int main()
{
    char c = 'a';
    cout<<"Char:"<<'\t'<<"int value:"<<'\n';

    while (c <= 'z'){
        cout<<c<<'\t'<<int(c)<<'\n';
        ++c;
    }
       
    return 0;
}