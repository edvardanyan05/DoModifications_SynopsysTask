#include "main.hpp"

long long toDigit(const string &s){
    long long num = 0;
    
    for(size_t i = 0; i < s.size(); i++){
        num *= 10;
        num += s[i] - '0';
    } 
    return num;
}