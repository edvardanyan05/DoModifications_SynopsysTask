// In this file, I implemented logic that creates a new string from the original one by removing spaces, tabs, and newlines.
#include "main.hpp"

string create_correct_string(string &s){
    string correct_string;
    
    for(size_t i = 0; i < s.size(); i++)
        if(s[i] != ' ' && s[i] != '\t' && s[i] != '\n') 
             correct_string.push_back(s[i]);
    return correct_string;
}