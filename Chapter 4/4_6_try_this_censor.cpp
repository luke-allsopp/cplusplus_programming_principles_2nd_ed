//4.6 censor input matching list of input words

#include"../std_lib_facilities.h"

int main()
{
    vector<string> words;
    vector<string> toCensor = {"Broccoli", "poop", "blerg", "ass"};

    cout << "Please phrase for censorship:\n";
    
    for(string temp; cin>>temp;) //read in whitespace seperated words
        words.push_back(temp); //push back into vector
    
    for (int i = 0; i < words.size(); ++i)
    {
        for (int j = 0; j < toCensor.size(); ++j)
        {
            if (words[i] == toCensor[j])
            {
                words[i] = "*REDACTED*";
            }
        }

        if(i==0 || words[i-1] != words[i])    
            cout << words[i] << " ";
        
    }

    return 0;
    
}