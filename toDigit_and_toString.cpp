// In this file, I implemented two functions: toDigit and toString.
// toDigit converts a numeric string into a long long integer.
// toString converts a `long long` integer into its string representation.
#include "main.hpp"

long long toDigit(const string &s){
    long long num = 0;
    
    for(size_t i = 0; i < s.size(); i++){
        num *= 10;
        num += s[i] - '0';
    } 
    return num;
}

string toString(long long num){
    if (num == 0) return "0";
    string rev_num, origin_num;
    while(num > 9){
        rev_num.push_back((num % 10) + '0');
        num /= 10;
    }
    rev_num.push_back((num % 10) + '0');
    for(size_t i = rev_num.size() - 1; i > 0 ; i--)
        origin_num.push_back(rev_num[i]);
    origin_num.push_back(rev_num[0]);
    return origin_num;
}