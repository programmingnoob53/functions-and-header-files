#include <iostream>
#include "functions.h"
using namespace std;


int main()
{

    string name = "ll";
    std::cout<<functions::count_chars(name)<<std::endl;
    std::cout<<"whitespaces number: " <<functions::count_charecter(' ', name)<<endl;
    std::cout<<"kali reversed: "<<functions::reversed("kali")<<endl;
    std::cout<<functions::check_string_is_same_backwards(name)<<endl;
    std::cout<<functions::is_vowel('b')<<endl;
    std::cout<<functions::remove_vowels("networkchuck is cool");







    return 0;
}
//like the headre file

