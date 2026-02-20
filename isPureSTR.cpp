//In this file, I implemented logic that checks whether there are any operators other than '+' and '-'.
#include "main.hpp"

bool isPureSTR(const string &s){
    for(size_t i = 0; i < s.size(); i++)
        if (s[i] == '*' || s[i] == '/')
            return false;
    return true;
}