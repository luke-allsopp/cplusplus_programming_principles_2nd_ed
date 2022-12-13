/*
Chapter 6 Exercise 6
read string in, and determine if it fits these grammar rules:

Sentence:
    Noun Verb
    Sentence Conjunction Sentence
Conjunction:
    "and"
    "or"
    "but"
Noun:
    "birds"
    "fish"
    "C++"
Verb:
    "rules"
    "fly"
    "swim"

birds fly but fish swim . passes in this implementation, but also all variations (correct), incorrect behaviour is that you can put down as many spaces before the fullstop and it will still pass (full stop has a single space still so is correct).
*/

#include"../std_lib_facilities_orig.h"

int main() {
    //prompt for input
    cout << "input a sentence to check for grammar\n";
    cout << "> "; 

    string word, sentence, noun, verb, conjunction;

    // Read sentence from user input
    while (cin >> word) {
        sentence += word + " ";
        if (word == ".") break;
    }
    cout << "Sentence entered: " << sentence << '\n';  //debugging

    // Check if sentence ends with "." surrounded by white space
    if (sentence[sentence.length()-3] != ' ' || sentence[sentence.length()-2] != '.') {
        cout << "not OK - fullstop ending wrong\n";
        return 1;
    }

    // Extract noun, verb, and conjunction from sentence
    noun = sentence.substr(0, sentence.find(" "));
    sentence = sentence.substr(sentence.find(" ")+1);
    verb = sentence.substr(0, sentence.find(" "));
    sentence = sentence.substr(sentence.find(" ")+1);
    conjunction = sentence.substr(0, sentence.find(" "));

    // Check if noun is valid
    if (noun != "birds" && noun != "fish" && noun != "C++") {
        cout << "not OK 2 - noun invalid\n";
        return 1;
    }

    // Check if verb is valid
    if (verb != "rules" && verb != "fly" && verb != "swim") {
        cout << "not OK 3 - verb invalid\n";
        return 1;
    }

    // Check if conjunction is valid
    if (conjunction != "and" && conjunction != "or" && conjunction != "but") {
        cout << "not OK 4 - conjunction invalid\n";
        return 1;
    }

    // If all checks pass, sentence is valid
    cout << "OK\n";
    return 0;
}