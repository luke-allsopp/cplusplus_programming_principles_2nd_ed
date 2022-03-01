//read in name and age
//output in months, mod to read age into a double
#include "../std_lib_facilities.h"


int main()
{
    std::cout << "Please enter your first name and age\n";
    std::string first_name;
    double age, age_m = 0;
    std::cin >> first_name;
    std::cin >> age;
    age_m = age * 12;
    std::cout << "Hello, " << first_name << "(age: " << age << " years/" << age_m << " months)\n";
}