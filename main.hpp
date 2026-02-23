#pragma once

#include <iostream>
#include <string>
#include <vector>
using namespace std;

void create_simpleSTR(string &);

bool isValidSTR(const string &);
bool isDigit(char);
bool isPureSTR(const string &);
bool isLetter(const char );
bool isOperator(const char);


string create_correct_string(const char*);
string toString(long long num);
string createSubSTR_bracket(const char *);

long long toDigit(const string &);
long long calculate_simpleSTR(const string &);
long long solve(const string &);

size_t coutOfParams(const string &, vector <char> &);