#include "main.hpp"

bool isOperator(const char c){
    if(c == '+' || c == '-' || c == '*' || c == '/')
        return true;
    return false;
}