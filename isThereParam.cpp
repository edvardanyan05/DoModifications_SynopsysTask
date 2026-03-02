// In this file, I implemented a function that finds the value of a parameter in a string.
#include "main.hpp"

char findParam(const string &s){
    for(size_t i = 0; i < s.size(); i++)
        if(isLetter(s[i]))
            return s[i];
    return 0;
}