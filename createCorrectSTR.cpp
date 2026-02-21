// In this file, I implemented logic to create a new string from the original one
// by removing all spaces, tabs, and newline characters.
#include "main.hpp"

string create_correct_string(const char *s){
    string correct_string;
    
    for(size_t i = 0; s[i]; i++)
        if(s[i] != ' ' && s[i] != '\t' && s[i] != '\n') 
             correct_string.push_back(s[i]);
    return correct_string;
}