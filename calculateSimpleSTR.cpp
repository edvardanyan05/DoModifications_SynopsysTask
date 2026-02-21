// In this file, I implemented logic that calculates a simple string containing only '+' and '-' operators.
#include "main.hpp"

long long calculate_simpleSTR(const string &s){
    long long res = 0;
    long long current = 0;
    int sign = 1;

    for(size_t i = 0; i <= s.size(); i++){
        if(i < s.size() && isdigit(s[i])){
            current = current * 10 + (s[i] - '0');
        }
        else{
            res += sign * current;
            current = 0;

            if(i < s.size()){
                if(s[i] == '-') sign = -1;
                else sign = 1;
            }
        }
    }
    return res;
}