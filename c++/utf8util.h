//
// Created by rz on 16/2/28.
//

#ifndef AWESOME_SIMPLE_AND_RELIABLE_UTF8UTIL_H
#define AWESOME_SIMPLE_AND_RELIABLE_UTF8UTIL_H

#include <iostream>
#include <sstream>

using namespace std;

int codepoint(const string &u);

string codepointhex(const string &u);

string utf8chr(int cp);

bool utf8_check_is_valid(const string &string);

int utf8_strlen(const string &s);

string utf8_substr(const string &str, unsigned int start = 0, unsigned int leng = string::npos);

int utf8util_test(int argc, char *argv[]);

#endif //AWESOME_SIMPLE_AND_RELIABLE_UTF8UTIL_H
