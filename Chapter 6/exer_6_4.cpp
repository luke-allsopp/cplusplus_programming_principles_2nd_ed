//Chapter 6 Exercise 4

/*
Initial Exercise 4-19 brief:

first have user input name,value pairs ie; john 18, barbara 22 etc..
add each to corresponding name/score vectors
element 0 is noname, terminate with that
terminate if noname, check if all names are unique and terminate with error if duplicates
output all pairs, 1 per line
====

job is to define a class Name_value that holds a string and value, rework below to use vector<Name_value> instead of 2 vectors

*/

#include"../std_lib_facilities_orig.h"

class Name_value{
public:
    string name;
    int value;
    Name_value(string str, int val)
        :name(str), value(val) { }
};

int main()
try {
    cout << "Enter name/value pairs below - terminate with 'NoName 0':\n";
    string name = "";
    int value = -1;
    vector<Name_value> VecNameVal;
    while (cin >> name >> value && !(name=="NoName" && value==0)) {
        for (int i = 0; i < VecNameVal.size(); i++)
            if (name == VecNameVal[i].name) error("Name occurs twice: ", name);
        VecNameVal.push_back(Name_value(name,value));        
    }
    
    for (int i = 0; i < VecNameVal.size(); i++) {
        cout << "{" << VecNameVal[i].name << "," << VecNameVal[i].value << "}\n";
    }
}
catch (exception& e) {
    cerr << "Blerg: " << e.what() << '\n';
    return 1;
}
catch (...) {
    cerr << "Blerggg - unknown error " << '\n';
    return 2;
}
