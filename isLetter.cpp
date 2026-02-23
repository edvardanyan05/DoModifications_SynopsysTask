#include "main.hpp"

bool isLetter(const char c){
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        return true;
    return false;
}