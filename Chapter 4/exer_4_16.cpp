#include"../std_lib_facilities.h"

/*
find mode of input of ints
*/
int get_mode(vector<int>values)
{
    sort(values.begin(),values.end());
    int comp = values[0];
    int count = 1;
    int mode_ctr = 1;
    int mode = 0;

    for (int i = 1; i < values.size(); i++)
    {
        if (values[i] == comp)
        {
            ++count;
        }
        else
        {
            if (count > mode_ctr)
            {
                mode_ctr = count;
                mode = comp;
            }
            count = 1;
            comp = values[i];

        } 
    }
    return mode;
}


int main()
{
    vector<int>values;
    int input;
    cout << "input some positive ints to calulate the mode of :\n";

    while (cin >> input)
    {
        values.push_back(input);
    }
    
    cout << "Mode of the ints entered is: " << get_mode(values) << '\n';


}