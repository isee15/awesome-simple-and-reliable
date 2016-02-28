#include <iostream>
#include "c++/md5.h"
#include "c++/sha1.h"
#include "c++/sha2.h"
#include "c++/base64.h"
#include "c++/utf8util.h"
#include "c++/strutil.h"

using namespace std;

int main(int argc, char *argv[]) {
    cout << "md5 of 'grape': " << md5("grape") << endl;
    cout << "sha1('grape'):" << sha1("grape") << endl;
    string input = "grape";
    string output1 = sha224(input);
    string output2 = sha256(input);
    string output3 = sha384(input);
    string output4 = sha512(input);

    cout << "sha224('" << input << "'):" << output1 << endl;
    cout << "sha256('" << input << "'):" << output2 << endl;
    cout << "sha384('" << input << "'):" << output3 << endl;
    cout << "sha512('" << input << "'):" << output4 << endl;

    cout << base64_decode("YQ==") << endl;
    cout << base64_decode("YWI=") << endl;
    cout << base64_decode("YWJj") << endl;
    cout << base64_decode("YWJjZA==") << endl;
    cout << base64_decode("YWJjZGU=") << endl;
    cout << base64_decode("YWJjZGVm") << endl;

    utf8util_test(argc, argv);

    {
        int i1 = 255;
        int i2 = 2147483647;//2.14 billion
        unsigned long i3 = 4294967295UL;//4.29 billion
        unsigned long long i4 = 4300000000ULL;//4.3 billion >more than 32 bits

        cout << i1 << "," << dec2hex(i1) << "," << dec2hex_c(i1) << endl;
        cout << i2 << "," << dec2hex(i2) << "," << dec2hex_c(i2) << endl;
        cout << i3 << "," << dec2hex(i3) << "," << dec2hex_c(i3) << endl;
        cout << i4 << "," << dec2hex(i4) << "," << dec2hex_c(i4) << endl;

    }

    {
        string i1 = "FF";
        string i2 = "7FFFFFFF";
        string i3 = "FFFFFFFF";
        string i4 = "1004CCB00";//if hex2dec returned int, this would overflow it

        cout << i1 << "," << hex2dec(i1) << "," << hex2dec_c(i1.c_str(), i1.length()) << endl;
        cout << i2 << "," << hex2dec(i2) << "," << hex2dec_c(i2.c_str(), i2.length()) << endl;
        cout << i3 << "," << hex2dec(i3) << "," << hex2dec_c(i3.c_str(), i3.length()) << endl;
        cout << i4 << "," << hex2dec(i4) << "," << hex2dec_c(i4.c_str(), i4.length()) << endl;
    }

    cout << bin2hex("ALPHA") << endl;//414c504841
    {
        std::string address = "123 #5 M&M Street";
        cout << "address=" << address << endl;
        cout << "address=" << urlencode(address) << endl;
        //outputs 123%20%235%20M%26M%20Street
    }
    cout << "Hello, World!" << endl;
    return 0;
}