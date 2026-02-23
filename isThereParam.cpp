#include "main.hpp"

static bool charInVector(const vector <char> &params, const char c){
    if (params.empty())
        return false;
    for(size_t i = 0; i < params.size(); i++)
        if(params[i] == c)
            return true;
    return false;

}

size_t coutOfParams(const string &s, vector <char> &params){
    for(size_t i = 0; i < s.size(); i++)
        if(isLetter(s[i]) && !charInVector(params,s[i]))
            params.push_back(s[i]);
    return params.size();
}