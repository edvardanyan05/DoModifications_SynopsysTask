#include "main.hpp"

string createSubSTR_bracket(const char *p){
    string substr;
    int bracket_count = 1;
    for(size_t i = 1 ; bracket_count == 0 ; i++){
        substr.push_back(p[1]);
        if(p[i + 1] == '(')
            bracket_count++;
        if(p[i + 1] == ')')
            bracket_count--;
    }
    
}


string delete_brackets(const string &s){
    string deleted_bracket;
    for(size_t i = 0; i < s.size() ; i++){
        if(s[i] == '('){
            long long res = solve(creatSubSTR_bracket(&s[i]));
            int bracket_count = 1;
            while(bracket_count != 0){
                i++;
                if (s[i] == '(')
                    bracket_count++;
                if (s[i] == ')')
                    bracket_count--;
            }
        }
    }
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
        while(j != 0 && s[j - 1] >= '0' && s[j - 1] <= '9')     j--;
        
        for(size_t k = 0; k < j ; k++)
            simple_tmp_string.push_back(s[k]);
        if(s[i + 1] == '-'){
            if(simple_tmp_string[simple_tmp_string.size() - 1] == '+')      simple_tmp_string[simple_tmp_string.size() - 1] = '-';
            if(simple_tmp_string[simple_tmp_string.size() - 1] == '-')      simple_tmp_string[simple_tmp_string.size() - 1] = '+';
            i += 2;
        }else i++;

        while(j < s.size() && s[j] >= '0' && s[j] <= '9')
            left.push_back(s[j++]);
        
        while(i < s.size() && s[i] >= '0' && s[i] <= '9')
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


long long solve(const string &s){
    string deleted_bracket;
    long long final_res;
    for(size_t i = 0; i < s.size() ; i++){
        if(s[i] == '('){
            long long res = solve(creatSubSTR_bracket(&s[i]));
            int bracket_count = 1;
            while(bracket_count != 0){
                i++;
                if (s[i] == '(')
                    bracket_count++;
                if (s[i] == ')')
                    bracket_count--;
            }
        }
    }
    for(size_t i = 0; i < s.size(); i++){
        if (s[i] == '*'){
            
        }
        if (s[i] == '/'){}
    }
    
    
    
    return res;
}


int main(int argc, char *argv[]){
    
    if (argc < 2) {
        cout << "ERROR!!! Few arguments";
        return 1;
    }

    string str = create_correct_string(argv[1]);

    if(!isValidSTR(str)){
        cout << "ERROR!!! You entered wrong string\n";
        return 2;
    }
    cout << "The result is : " ; //<< solve(str);
    return 0;
}