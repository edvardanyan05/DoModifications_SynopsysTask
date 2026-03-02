#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <cstdarg>
using namespace std;

void create_simpleSTR(string &);

bool isValidSTR(const string &);
bool isDigit(char);
bool isPureSTR(const string &);
bool isLetter(const char );
bool isOperator(const char);


string removeSpaces(const char*);
string toString(long long num);
string createSubSTR_bracket(const char *);
string addMultiplicationOp(string);
string setParamValue(const string &, const size_t, const char);

long long toDigit(const string &);
long long calculate_simpleSTR(const string &);
long long solve(const string &);

char findParam(const string &);