#include<iostream>
#include<string>
using namespace std;

void prtStr(string& str, int num = 0);

int main() {
    string s = "Welcome";
    prtStr(s);
    prtStr(s);
    prtStr(s, 2);
    prtStr(s);
    prtStr(s, 1);
}

void prtStr(string& str, int num) {
    static int i = 0;
    i++;
    cout << "The string you input: \n";
    if (num == 0) {
        cout << str << endl;
    } else {
        for (int idx = 0; idx < i; ++idx)
            cout << str << endl;
    }
}