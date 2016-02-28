//
// Created by rz on 16/2/28.
//

#ifndef AWESOME_SIMPLE_AND_RELIABLE_STRUTIL_H
#define AWESOME_SIMPLE_AND_RELIABLE_STRUTIL_H

#include <iostream>

using namespace std;

string dec2hex(unsigned long long i);

string dec2hex_c(unsigned int i);

unsigned long long hex2dec(const string &input);

unsigned long long hex2dec_c(const char *s, int length);

std::string bin2hex(const std::string &s);

std::string urlencode(const std::string &c);

#endif //AWESOME_SIMPLE_AND_RELIABLE_STRUTIL_H
