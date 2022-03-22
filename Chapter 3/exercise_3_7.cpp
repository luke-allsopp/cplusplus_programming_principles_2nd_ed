//Chapter 3 Exercise 7:

#include"../std_lib_facilities.h"

int main()
{
    cout << "Exercise 3.7 - string sorting: \n"
         << "please enter; steinbeck, hemingway, fitzgerald in any order by EOF's:\n";

    string s1, s2, s3, f, h, s;

    cin >> s1;
    cout << "please enter string 2:\n";
    cin >> s2;
    cout << "please enter string 3:\n";
    cin >> s3;

    if(s1.empty()||s2.empty()||s3.empty()){
        cout << "input error, retry";
    }else{
        if(s1=="fitzgerald"){
            f = s1;
            if(s2 =="steinbeck")
            {
                s = s2;
                h = s3;
            }
            
        }else if(s2=="fitzgerald"){
            f = s2;
            if(s1 =="steinbeck")
            {
                s = s1;
                h = s3;
            }
            

        }else if (s3=="fitzgerald"){
            f = s3;
            if(s1 == "steinbeck")
            {
                s = s1;
                h = s2;
            }
            

        }
        
    }
    cout<<"In order:"<<f<<", "<<h<<", "<<s<<'\n';
    return 0;
}