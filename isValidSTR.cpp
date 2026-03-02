// In this file, I implemented logic to validate a cleaned string (without spaces, tabs, or newlines).
// It checks:
// - Whether the first character is '*' or '/'.
// - Whether there are different parameters or not.
// - Whether the parentheses are balanced.
// - Whether the parentheses are not empty.
// - Whether a number or '(' appears after an operator.
// - Whether the string contains only valid characters digits, '+', '-', '*', '/', '(', ')'.
#include "main.hpp"

bool isValidSTR(const string &s){
    if (s.empty())
        return false;

    int bracket_count = 0;
    char param = '\0';
    if(s[0] == '*' || s[0] == '/')
        return false;

    for(size_t i = 0; i < s.size(); i++){
        if (isDigit(s[i]))
            continue;
        if (isLetter(s[i])){
            if(param == '\0'){
                param = s[i];
                continue;
            }else if (param != s[i]){
                return false;
            }else if(param == s[i]){
                continue;
            }
            return false;
        }
        if(s[i] == '('){
            bracket_count++;
            if(i + 1 < s.size() && s[i + 1] == ')')
                return false;
            continue ;
        }
        if(s[i] == ')'){
            bracket_count--;
            if (bracket_count < 0)
                return false;
            continue;
        }
        if (isOperator(s[i])) {
            if (i + 1 >= s.size())
                return false;
            if (!((isDigit(s[i + 1])) || isLetter(s[i + 1]) || s[i + 1] == '('))
                return false;
            continue;
        }
        return false;
    }
    if (bracket_count != 0)
            return false;
    return true;
}