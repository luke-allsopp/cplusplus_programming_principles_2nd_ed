/* exercise 6-10

A permutation is an ordered subset of a set. For example, say you wanted
to pick a combination to a vault. There are 60 possible numbers, and
you need three different numbers for the combination. There are P(60,3)
permutations for the combination, where P is defined by the formula

    P(a,b) = a!/(a-b)!

** can you swap a,b for the example of a 27 character password, using letter chars - a = 26, b = 27? factorials of neg ints are undefined........

where ! is used as a suffix factorial operator. For example, 4! is 4*3*2*1.
Combinations are similar to permutations, except that the order of the
objects doesn’t matter. For example, if you were making a “banana split”
sundae and wished to use three different flavors of ice cream out of five
that you had, you wouldn’t care if you used a scoop of vanilla at the
beginning or the end; you would still have used vanilla. The formula for
combinations is

    C(a,b) = P(a,b) / b!

Design a program that asks users for two numbers, asks them whether
they want to calculate permutations or combinations, and prints out the
result. This will have several parts. Do an analysis of the above requirements.
Write exactly what the program will have to do. Then, go into
the design phase. 

Write pseudo code for the program, and break it into
sub-components. This program should have error checking. Make sure
that all erroneous inputs will generate good error messages.
*/

#include "../std_lib_facilities_orig.h"

//function to find factorial
float getFact(float x)
{
    float fact = 1;
    switch (x < 0 ? -1 : (x > 0 ? 1 : 0))    {
    case -1:
        error("Blerg, attempted to calculate factorial of negative number");
        return 1;
        break;
    case 0:
        // accounting for 0!=1, fact initialized as 1, so do nothing
        break;
    case 1:
        for (float i = fact; i <= x; i++) {
            fact *= i;
        }
        break;
    default:
        error("extra blerg, not sure how we're getting here lol");
        return 1;
    }
    return fact;
}

//function to find permutations given (a,b)
int getPerms(int a, int b)
{
    int c = (a - b);
    int perms = 0;

    switch (c < 0 ? -1 : (c > 0 ? 1 : 0))    {
    case -1:
        error("Blerg, attempted to calculate factorial of negative number");
        return 1;
        break;
    case 0:
        error("umm, set size and combos are 0 buddy...\n");
        return 1;
        break;
    case 1:
        perms = (getFact(a))/(getFact(c));
        break;
    }
    
    return perms;
}

//function to find combos given (a,b)
int getCombos(int a, int b)
{
    int combos = getPerms(a, b) / getFact(b);
    return combos;
}

int main()
try {
    //ask for input, call functions to calculate given operation for a,b, output result, use try-catch error checking.
    cout << "Please input (a b) in order to calculate either P(a,b) or C(a,b)\n where a= # possible values for password (eg 10 for digits, or 26 for letters)\n and b = number of values in the password (eg, password length)\n ";
    cout << "> "; 

    int a, b, result = 0;
    char choice =' ';
    cin >> a >> b;

    cout << "\nDo you want to calculate the Combinations or Permuations of the input set; a=" << a << ", b=" << b << '\n';
    cout << "   a) Permuations\n";
    cout << "   b) Combinations\n";
    cin >> choice; 

    switch(choice) {

        case 'a':
            result = getPerms(a,b);
            cout << "The number of P(a,b) of a=" << a << ", b=" << b << " are " << result << '\n';
        break;

        case 'b':
            result = getCombos(a,b);
            cout << "The number of C(a,b) of a=" << a << ", b=" << b << " are " << result << '\n';
        break;

        default:
        error("Unspecified Calculation request.. shoulda put a or b in bud");
        return 1;
        break;
    }
}
catch(exception& e) {
    cerr << "Error: " << e.what() << '\n';
    return 1;
}
catch(...) {
    cerr << "Serious Blerg time...\n";
    return 2;
}