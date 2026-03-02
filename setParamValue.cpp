// In this file, I implemented a function that takes a string , a parameter number and the parameter.
// The parameter in the string will be replaced with the given number.
// The goal is to convert the source string into a new string where the parameter is substituted with the provided numeric value.
#include "main.hpp"

string setParamValue(const string &str, const size_t num, const char param){
    string str_num = toString(num);
    string result;
    
    for(size_t i = 0; i < str.size(); i++){
        if (str[i] == param){
            result += str_num;
            continue;
        }
        result.push_back(str[i]);
    }

    return result;
}
