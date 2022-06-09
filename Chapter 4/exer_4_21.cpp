#include"../std_lib_facilities.h"

/*
first have user input name,value pairs ie; john 18, barbara 22 etc..

add each to corresponding name/score vectors

element 0 is noname, terminate with that

terminate if noname, check if all names are unique and terminate with error if duplicates

output all pairs, 1 per line

modified to ask user to for score to check first input
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
    int input2;
    bool score_valid = false;

    cout << "input name, score value pairs, terminate with NoName 0\n\n";

    while ((cin >> name >> score )  && (name != "NoName" && score != 0))
    {
        if (doubled_up(name, names))
        {
            cout << "blerg, a name (" << name << ") has been entered at least twice, taking the first one only.\n\n";
        }else{
            names.push_back(name);
            scores.push_back(score);
        }   
    }

    cout << "\npick an input score to return name:\n";

    while (cin >> input2)
    {
        for (int j = 0 ; j < scores.size(); j++)
        {
            if (input2 == scores[j])
            {
                cout << names[j] << "'s score is " << scores[j] << '\n';
                score_valid = true;
            }
        }

        if (score_valid == false)
        {
            cout << "blerg - input score not found\n" << "pick another input score to return name:\n";
        }else if (score_valid == true)
        {
            return 0;
        }   
    }   
}