// In this file, I implemented logic to process a string expression
// containing only numbers and the operators '+', '-', '*', and '/'.
// The expression does not include parentheses.
// The goal is to transform the expression into an equivalent form
// that contains only '+' and '-' operators.

#include "main.hpp"

void create_simpleSTR(string &s){
    while(!isPureSTR(s)){
        string simple_tmp_string , left , right;

        size_t i = 0 , j;
        long long res_num;
        while(i < s.size() && s[i] != '*' && s[i] != '/')
            i++;

        bool mult_VS_dev;
        if (s[i] == '*')    mult_VS_dev = true;
        if (s[i] == '/')    mult_VS_dev = false;

        j = i - 1;
        while(j != 0 && isDigit(s[j - 1]))      j--;
        
        for(size_t k = 0; k < j ; k++)
            simple_tmp_string.push_back(s[k]);


        if(s[i + 1] == '-'){
            if(simple_tmp_string[simple_tmp_string.size() - 1] == '+')      simple_tmp_string[simple_tmp_string.size() - 1] = '-';
            if(simple_tmp_string[simple_tmp_string.size() - 1] == '-')      simple_tmp_string[simple_tmp_string.size() - 1] = '+';
            i += 2;
        }
        else if(s[i + 1] == '+')       i += 2;
        else i++;


        while(j < s.size() && isDigit(s[j]))
            left.push_back(s[j++]);
        
        while(i < s.size() && isDigit(s[i]))
            right.push_back(s[i++]);

        if(mult_VS_dev)     res_num = toDigit(left) * toDigit(right);
        else                res_num = toDigit(left) / toDigit(right);

        string res_string = toString(res_num);
        for(size_t k = 0; k < res_string.size() ; k++)
            simple_tmp_string.push_back(res_string[k]);
        for( ; i < s.size() ; i++)
            simple_tmp_string.push_back(s[i]);
        
        s = simple_tmp_string;
    }
}