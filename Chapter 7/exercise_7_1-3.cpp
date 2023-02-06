/*
Ch 7 Exercise 01 - Allow underscores in the calculator’s variable names.
implemented. 

also bug fixes done in drill cover ex 1-3

*/

#include "../std_lib_facilities_orig.h"

struct Token {
	char kind;
	double value;
	string name;
	Token(char ch) :kind(ch), value(0) { }
	Token(char ch, string s) :kind(ch), name(s) { }
	Token(char ch, double val) :kind(ch), value(val) { }
};

class Token_stream {
	bool full;
	Token buffer;
public:
	Token_stream() :full(0), buffer(0) { }	
	Token get();
	void unget(Token t) { buffer = t; full = true; }
	void ignore(char);
};

const char let = '#';
const char quit = 'Q';
const char print = ';';
const char number = '8';
const char square_root = '?';
const char name = 'a';
const char power = '^';

Token Token_stream::get()
// read characters from cin and compose a Token
{
	if (full) { 			// check if we already have a Token ready
		full = false; 
		return buffer; 
	}
	char ch;
	cin >> ch;				// >> ignores whitespace and newline
	switch (ch) {
	case quit:
	case square_root:
	case power:
	case let:
	case '(':	
	case ')':	
	case '+':	
	case '-':	
	case '*':	
	case '/':	
	case '%':	
	case ';':
	case '=':
		return Token(ch);	// let each character represent itself
	case '.':				// floats can start with .
	case '0':	case '1':	case '2':	case '3':	case '4':	
	case '5':	case '6':	case '7':	case '8':	case '9':	//numeric literal
	{					
		cin.putback(ch);	//put digit into the input stream
		double val;
		cin >> val;			//read a float
		return Token(number, val);
	}
	default:
		if (isalpha(ch)) {
			string s;
			s += ch;
			while (cin.get(ch) && (isalpha(ch) || isdigit(ch) || ch == '_')) s += ch;
			cin.putback(ch);
			//if (s == "let") return Token(let);  //removed to let == # instead
			if (s == "exit") return Token(quit);
			if (s == "sqrt") return Token(square_root);
			return Token(name, s);
		}
		error("Bad token");
	}
}

void Token_stream::ignore(char c)  //ignores all tokens up until the first instance of "c"
{
	if (full && c == buffer.kind) {
		full = false;
		return;
	}
	full = false;

	char ch;
	while (cin >> ch)
		if (ch == c) return;
}

struct Variable {
	string name;
	double value;
	Variable(string n, double v) :name(n), value(v) { }
};

vector<Variable> names;

double get_value(string s)  //get a variable value from variable vector
{
	for (int i = 0; i < names.size(); ++i)
		if (names[i].name == s) return names[i].value;
	error("get: undefined name ", s);
}

void set_value(string s, double d)  //changes the value of an existing variable
{
	for (int i = 0; i <= names.size(); ++i)
		if (names[i].name == s) {
			names[i].value = d;
			return;
		}
	error("set: undefined name ", s);
}

bool is_declared(string s)
{
	for (int i = 0; i < names.size(); ++i)
		if (names[i].name == s) return true;
	return false;
}

Token_stream ts;

double expression();  //declaration so primary can use it

double primary() // handles (), unary + / -, names, and assignments
{
	Token t = ts.get();
	switch (t.kind) {
	case '(':
	{	
		double d = expression();
		t = ts.get();
		if (t.kind != ')') error("'(' expected");
		return d;
	}
	case '-':
		return - primary();
	case number:
		return t.value;
	case name:
		return get_value(t.name);
	case square_root:
	{
		double d = primary();
		if (d<0) error ("Blerg, cannot handle imaginary numbers (attempted to square root negative number)");
		return sqrt(d);
	}
	default:
		error("primary expected");
	}
}

double pow(double base, double exp)
{
    int x = narrow_cast<int>(exp);

    double n = 1;
    double b;

    if (exp < 0) {
        b = 1 / base;
        x *= -1;
    } else
        b = base;

    for (int i = 0; i < x; ++i)
        n *= b;

    return n;
}

double secondary()
{
    double left = primary();
    while(true) {
        Token t = ts.get();
        switch(t.kind) {
            case '^':
                return pow(left, primary());
            default:
                ts.unget(t);
                return left;
        }
    }
}

double term() //handles *, / 
{
	double left = secondary();
	while (true) {
		Token t = ts.get();
		switch (t.kind) {
		case '*':
			left *= secondary();
			break;
		case '/':
		{	
			double d = secondary();
			if (d == 0) error("divide by zero");
			left /= d;
			break;
		}
		default:
			ts.unget(t);
			return left;
		}
	}
}

double expression() //handles + / -, calls term()
{
	double left = term();
	while (true) {
		Token t = ts.get();
		switch (t.kind) {
		case '+':
			left += term();
			break;
		case '-':
			left -= term();
			break;
		default:
			ts.unget(t);
			return left;
		}
	}
}

double declaration() //  declare a variable called "name" with the initial value "expression"
{
	Token t = ts.get();
	if (t.kind != name) error("name expected in declaration");
	string name = t.name;
	if (is_declared(name)) error(name, " declared twice");
	Token t2 = ts.get();
	if (t2.kind != '=') error("= missing in declaration of ", name);
	double d = expression();
	names.push_back(Variable(name, d));
	return d;
}

double statement() // handles declarations and expressions
{
	Token t = ts.get();
	switch (t.kind) {
	case let:
		return declaration();
	default:
		ts.unget(t);
		return expression();
	}
}

void clean_up_mess() //clean up intput after errors
{
	ts.ignore(print);
}

const string prompt = "> ";
const string result = "= ";

void calculate()
{	
	names.push_back(Variable("k", 1000));  //predefine k
	names.push_back(Variable("pi", 3.14159)); // predefine pi
	
	while (true) try {
		cout << prompt;
		Token t = ts.get();
		while (t.kind == print) t = ts.get();
		if (t.kind == quit) return;
		ts.unget(t);
		cout << result << statement() << endl;
	}
	catch (runtime_error& e) {
		cerr << e.what() << endl;
		clean_up_mess();
	}
}

int main()
try 
{
	calculate();
	return 0;
}
catch (exception& e) {
	cerr << "exception: " << e.what() << endl;
	char c;
	while (cin >> c && c != ';');
	return 1;
}
catch (...) {
	cerr << "exception\n";
	char c;
	while (cin >> c && c != ';');
	return 2;
}