//try this ch 3.5.1

#include"../std_lib_facilities.h"

int main()
{
    string previous = " "; //previous word, initialized to a space
    string current;
    int count = 0;
    while(cin>>current){
        ++count;
        if(previous==current)
            cout<<"repeated word: "<<current<<'\n';
        previous=current;
    }
    cout<<"most repeated word count: "<<count<<'\n';
}