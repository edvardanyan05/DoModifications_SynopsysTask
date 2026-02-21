#pragma once

#include <iostream>
#include <string>
using namespace std;

void create_simpleSTR(string &);

bool isValidSTR(const string &);
bool isDigit(char);
bool isPureSTR(const string &);

string create_correct_string(const char*);
string toString(long long num);
string createSubSTR_bracket(const char *);

long long toDigit(const string &);
long long calculate_simpleSTR(const string &);
long long solve(const string &);