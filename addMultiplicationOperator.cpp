// In this file, I implemented logic to insert the '*' operator into the string where necessary.
// For example`
//      "1+2(1+2)" -> "1+2*(1+2)"
//      "1+(1+2)2" -> "1+(1+2)*2"
//      "1+2a" -> "1+2*"
#include "main.hpp"

string addMultiplicationOp(const string str) {
    string result;

    for (size_t i = 0; i < str.size(); i++) {
        result.push_back(str[i]);

        if (i + 1 < str.size()) {
            char curr = str[i];
            char next = str[i + 1];

            bool left  = isDigit(curr) || isLetter(curr) || curr == ')';
            bool right = isLetter(next) || next == '(';

            if (left && right) {
                result.push_back('*');
            }
        }
    }

    return result;
}