/*Define a recursive function that takes an integer argument and returns the factorial
of that argument. Recall that 3 factorial, written 3!, equals 3 ¡Á 2!,and so on, with 0!
defined as 1. In general, if n is greater than zero, n! = n * (n - 1)!.Test your function
in a program that uses a loop to allow the user to enter various values for which the
program reports the factorial.*/

#include<iostream>
using namespace std;
int fact(int n);

int main() {
    unsigned n;
    cout << "Enter the number:\n";
    while (cin >> n && n != (int)'q') {
        cout << "The factorial of ";
        cout << n;
        cout << " is " << fact(n) << endl;
        cout << "Next number (q to quit):\n";
    }
    cout << "bye\n";
    return 0;
}

int fact(int n) {
    int res = 1;
    if (n == 0)
        return res;
    else 
        return n * fact(n - 1);
}