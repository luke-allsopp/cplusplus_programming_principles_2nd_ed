#include "../std_lib_facilities.h"


int main()
{
    cout<<"Please enter recipient's first name, followed by ENTER:\n";
    string first_name;
    cin>>first_name;
    cout<<"--Please enter best friend name:\n";
    string friend_name;
    cin>>friend_name;
    cout<<"Dear "<<first_name<<", \n";
    cout<<"\n     I am writing to you today to declare war.\nYour aggressive acts will no longer be tolerated by \nthe brave nation of Sealand.\n";
    cout<<"However, we shall accept "<<friend_name<<" as a sacrifice to pacify the populace.\n Nothing less will be acceptable.\n Yours Truly,\n King of Sealand\n";
}