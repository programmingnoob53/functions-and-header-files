#include <iostream>
#include "functions.h"
//functions declerations
namespace functions{
    int power_function(int num, int power_to_raise){
        int intResult = 1;
        while (power_to_raise>=1){
            intResult *= num;
            power_to_raise--;
        }
        return intResult;//return the result to the sender
}
    int count_chars(std::string strString){
        int result =0;
        for (char k : strString){
            result += 1;
        }
        return result;
    }
    int count_charecter(char char_, std::string strString){
        int result=0;
        for (char k : strString){
            (k==char_) ? result += 1:result+=0;
        }
        return result;
    }
    //string reversal function
    std::string reversed(std::string strString){
        //this function is used to reverse a string
        //first find the length of the string
        std::string strReversed = "";//store our reversed version
        int strLength = count_chars(strString);//use our our funtions to get length
        for(int counter = strLength-1; counter>=0; counter--){
            strReversed += strString[counter];
        }
        return strReversed;
    }
    std::string check_string_is_same_backwards(std::string phrase){
        const std::string is_same_ = "yes";//
        const std::string is_not_same = "no";
        std::string strAnswer;//store our output
        std::string phrase_reversed = reversed(phrase);//calls
        (phrase_reversed == phrase) ? strAnswer = is_same_:strAnswer=is_not_same;//if...else.
        return strAnswer;//end our funtion
    }

    bool is_vowel(char charecter){
        bool value = true;//return if it is a vowel
        bool value2 = false;//return if it is not
        charecter = std::tolower(charecter);//convert to lower

        switch(charecter){
            case 'a':
                {
                    return value;

                }break;
            case 'e':
                {
                    return value;
                }break;
            case 'i':
                {
                    return value;

                }break;
            case 'o':
                {
                    return value;

                }break;
            case 'u':
                {
                    return value;
                }break;
            default:
                {
                   return value2;
                }break;
            }



    }
    std::string remove_vowels(std::string str){
        std::string newstr= "";
        for(char s : str){
            (is_vowel(s)) ? newstr += '\0' : newstr += s;
        }
        return newstr;
    }





}
