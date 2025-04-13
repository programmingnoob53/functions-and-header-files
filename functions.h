#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED
//functions prototypes
namespace functions{

    int power_function(int num, int power_to_raise);
    int count_chars(std::string strString);
    int count_charecter(char char_, std::string strString);
    //string reversal function
    std::string reversed(std::string strString);
    //check if a string reads the same backwards and forwards
    std::string check_string_is_same_backwards(std::string phrase);
    bool is_vowel(char charecter);//check if a charecter is a vowel and return a yes or no
    std::string remove_vowels(std::string str);


}


#endif // FUNCTIONS_H_INCLUDED
