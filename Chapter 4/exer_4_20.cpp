#include"../std_lib_facilities.h"

/*
first have user input name,value pairs ie; john 18, barbara 22 etc..

add each to corresponding name/score vectors

element 0 is noname, terminate with that

terminate if noname, check if all names are unique and terminate with error if duplicates

output all pairs, 1 per line
*/

bool doubled_up(string name, vector<string>names)
{
    bool result {false};

    for (string input : names)
    {
        if (input == name)
        {
            result = true;
        }  
    }
    return result;
}

int main()
{
    string name {' '};
    double score {0};
    vector<string>names;
    vector<double>scores;
    string input2;

    cout << "input name, score value pairs, terminate with NoName 0\n\n";

    while ((cin >> name >> score )  && (name != "NoName" && score != 0))
    {
        if (doubled_up(name, names))
        {
            cout << "blerg, a name (" << name << ") has been entered at least twice\n";
        }else{
            names.push_back(name);
            scores.push_back(score);
        }   
    }

    cout << "\npick an input name to return score:\n";

    cin >> input2;

    for (int j = 0 ; j < names.size(); j++)
    {
        if (input2 == names[j])
        {
            cout << names[j] << "'s score is " << scores[j] << '\n';
        } 
    }

    return 0;
}