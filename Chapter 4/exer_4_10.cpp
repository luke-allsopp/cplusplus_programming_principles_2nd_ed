#include"../std_lib_facilities.h"

/*rock paper scissors, not using vector as specified but rand implementation from http://www.cplusplus.com/reference/cstdlib/rand/ */

int main()
{
    char pc = ' ';
    int pc_int = 0;
    char user = ' ';
    vector<char>choices={'r','p','s'};

    cout << "**Rock, Paper, Scissors**\nInput your choice (r,p,s):\n";
    
    
    while (cin >> user)
    {
        //rand num instead of bad vector use
        srand (time(NULL));
        // generate secret number between 1 and 10: 
        pc_int = rand() % 3 + 1;
        pc = choices[(pc_int-1)];

        switch (pc)
        {
        case 'r':
            if (user == 'r')
            {
                cout << "ROCK - ROCK .... TIE \n";
            }else if (user == 'p')
            {
                cout << "ROCK - PAPER .... YOU WIN! \n";
            }else if (user == 's')
            {
                cout << "ROCK - SCISSORS .... I WIN! \n";
            }else
            {
                cout << "blerg1";
            }
            break;
        case 'p':
            if (user == 'r')
            {
                cout << "PAPER - ROCK .... I WIN! \n";
            }else if (user == 'p')
            {
                cout << "PAPER - PAPER .... TIE \n";
            }else if (user == 's')
            {
                cout << "PAPER - SCISSORS .... YOU WIN! \n";
            }else
            {
                cout << "blerg2";
            }
            break;
        case 's':
            if (user == 'r')
            {
                cout << "SCISSORS - ROCK .... YOU WIN! \n";
            }else if (user == 'p')
            {
                cout << "SCISSORS - PAPER .... I WIN! \n";
            }else if (user == 's')
            {
                cout << "SCISSORS - SCISSORS .... TIE \n";
            }else
            {
                cout << "blerg3";
            }
            break;

        default:
            cout << "blerg4";
            break;
        }

        cout << "**Let's Play Again**\nInput your choice (r,p,s):\n";
    }

}