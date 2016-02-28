//
// Created by rz on 16/2/28.
//

#include <stdio.h>
#include <sstream>
#include "strutil.h"

string dec2hex(unsigned long long i) {
    stringstream ss;
    ss << hex << uppercase << i;
    //ss << hex << lowercase << i;
    //ss << showbase << hex << lowercase << i; //prepends 0x
    //string s; ss >> s; return s; //alternate way to extract string
    return ss.str();
}

string dec2hex_c(unsigned int i) //has limit of 32 bit integer
{
    char s[20];
    sprintf(s, "%X", i);//uppercase
    //sprintf(s, "%x", i);//lowercase
    return string(s);
}


unsigned long long hex2dec(const string &input) {
    unsigned long long n;
    stringstream ss;
    ss << hex << uppercase << input;
    //ss << hex << lowercase << input;
    ss >> n;
    return n;
}

unsigned long long hex2dec_c(const char *s, int length) {
    unsigned long long n = 0;
    int v;
    for (int i = 0, v = 0; i < length && s[i] != '\0'; i++) {

        if ('a' <= s[i] && s[i] <= 'f') { v = s[i] - 97 + 10; }
        else if ('A' <= s[i] && s[i] <= 'F') { v = s[i] - 65 + 10; }
        else if ('0' <= s[i] && s[i] <= '9') { v = s[i] - 48; }
        else break;
        n *= 16;
        n += v;
    }
    return n;
}

std::string bin2hex(const std::string &s) {
    const static char bin2hex_lookup[] = "0123456789abcdef";
    unsigned int t = 0, i = 0, leng = s.length();
    std::stringstream r;
    for (i = 0; i < leng; i++) {
        r << bin2hex_lookup[s[i] >> 4];
        r << bin2hex_lookup[s[i] & 0x0f];
    }
    return r.str();
}

std::string urlencode(const std::string &s) {
    static const char lookup[] = "0123456789abcdef";
    std::stringstream e;
    for (int i = 0, ix = s.length(); i < ix; i++) {
        const char &c = s[i];
        if ((48 <= c && c <= 57) ||//0-9
            (65 <= c && c <= 90) ||//abc...xyz
            (97 <= c && c <= 122) || //ABC...XYZ
            (c == '-' || c == '_' || c == '.' || c == '~')
                ) {
            e << c;
        }
        else {
            e << '%';
            e << lookup[(c & 0xF0) >> 4];
            e << lookup[(c & 0x0F)];
        }
    }
    return e.str();
}
