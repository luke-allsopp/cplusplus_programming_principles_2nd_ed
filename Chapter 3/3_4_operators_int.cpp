//try this ch 3.4
#include"../std_lib_facilities.h"

int main()
{
    cout<<"Please enter a floating-point value:";
    int n;
    double nn;
    double x;
    cin>>n;
    nn=n;
    x = sqrt(n);

    cout<<"n=="<<nn
        <<"\nn+1=="<<nn+1
        <<"\nn x2=="<<nn*2
        <<"\nn^2=="<<nn*nn
        <<"\nn/2=="<<nn/2
        <<"\nsqrt n=="<<x
        <<'\n';
}