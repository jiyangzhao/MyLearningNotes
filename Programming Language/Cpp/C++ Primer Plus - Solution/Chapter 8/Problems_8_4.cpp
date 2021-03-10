/*
Complete this skeleton by providing the described functions and prototypes. Note
that there should be two show() functions, each using default arguments. Use
const arguments when appropriate. Note that set() should use new to allocate
sufficient space to hold the designated string.The techniques used here are similar
to those used in designing and implementing classes. (You might have to alter the
header filenames and delete the using directive, depending on your compiler.)
*/

#include<iostream>
#include<cstring> // for strlen(), strcpy()
using namespace std;

struct  stringy {
    char * str; // points to a string
    int ct; // length of string not counting '\0'
};

// prototypes for set(), show(), and show() fo here
void setStr(stringy & str, const char* chArr);
void show(const stringy & s, int times = 1);
void show(const char * chArr, int times = 1);

int main() {
    stringy beany;
    char testing[] = "Reality isn't what it used to be.";
    
    setStr(beany, testing);
    show(beany);
    show(beany, 2);
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);
    show(testing, 3);
    show("Done!");
    return 0;
}

void setStr(stringy & strg, const char* chArr) {
    strg.ct = strlen(chArr) + 1;
    strg.str = new char[strg.ct];
    strcpy(strg.str, chArr);
}

void show(const stringy & s, int times) {
    for (int i = 0; i < times; ++i)
        cout << s.str << endl;
}

void show(const char * chArr, int times) {
    for (int i = 0; i < times; ++i)
        cout << chArr << endl;
}