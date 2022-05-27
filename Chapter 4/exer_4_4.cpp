#include"../std_lib_facilities.h"

//game to guess user number 1-100 in <7 attempts

int main()
{
    int guess {0};
    int min {1};
    int max {100};
    int query {0};

    cout << "please think of a int between " << min << " -> " << max << ", for me to guess:\n" ;
    char answer {' '};

    while (min != max)
    {    
        //correct for int division errors
        if ((max - min) == 1)
        {
            guess = max;
        }else
        {
            guess = (max + min) / 2;
        }
        
        if (query%2 == 0) {
            cout << "Is your number less than " << guess << "? (y/n).\n";

            cin >> answer;
            if (answer == 'y'){
                ++query;
                max = guess-1;
            }
            else if (answer == 'n'){
                ++query;
                min = guess;
            }
            else 
                cout << "blerg. Try Again.\n";
        }
        else {
            cout << "Is your number more than " << guess << "? (y/n)\n";

            cin >> answer;
            if (answer == 'y'){
                ++query;
                min = guess+1;
            }
            else if (answer == 'n'){
                ++query;
                max = guess;
            }
            else 
                cout << "Sorry, I don't understand your answer. Again ...\n";
        }
    }

    cout << "The number you were thinking of is: " << min << '\n';
    cout << "I only needed " << query << " questions to guess.\n";
    return 0;
}