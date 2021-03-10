#include<iostream>
#include<string>
using namespace std;

void goUpper(string& s);

int main() {
    string str;
    cout << "Enter a string(q to quit): \n";
    //getline(cin, str);
    while (getline(cin,str) && str != "q") {
        goUpper(str);
        cout << str << endl;
        cout << "Enter a string(q to quit): \n";
    }
    cout << "Bye.";
}

void goUpper(string& s) {
    for (int i = 0; i < s.size(); ++i) {
        s[i] = toupper(s[i]);
    }
}