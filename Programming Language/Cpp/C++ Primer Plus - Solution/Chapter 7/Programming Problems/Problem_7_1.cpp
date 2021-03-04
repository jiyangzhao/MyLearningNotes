/*Write a program that repeatedly asks the user to enter pairs of numbers until at
least one of the pair is 0. For each pair, the program should use a function to calculate the harmonic mean of the numbers.The function should return the answer to
main(), which should report the result.The harmonic mean of the numbers is the
inverse of the average of the inverses and can be calculated as follows:
harmonic 
mean = 2.0 ¡Á x ¡Á y / (x + y)*/

#include<iostream>

using namespace std;
double harmMean(double, double);

int main() {
    double x, y;
    cout << "Please input 2 numbers (0 to quit):\n";
    while (cin >> x >>y) {
        if (x == 0 || y == 0)
            break;
        else {
            cout << "The harmonic mean of ";
            cout << x << " and " << y << " is ";
            cout << harmMean(x,y) << endl;
            cout << "Please input 2 numbers (0 to quit):\n";
        }
    }
    return 0;
}

double harmMean(double x, double y) {
    return 2 * x * y / (x + y);