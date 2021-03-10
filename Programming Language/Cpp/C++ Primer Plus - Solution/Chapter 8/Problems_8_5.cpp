/*
Write a template function max5() that takes as its argument an array of five items
of type T and returns the largest item in the array. (Because the size is fixed, it can
be hard-coded into the loop instead of being passed as an argument.) Test it in a
program that uses the function with an array of five int value and an array of five
double values.
*/

#include<iostream>
#include<string>
using namespace std;

template <typename T>
T max5(T Arr[5]);

int main() {
    int A_int[5] = {1,3,2,8,2};
    double A_double[5] = {0.0, 2.1, 1.9, 8.4, 5.5};
    cout << "The max int in array 1 is: " << max5(A_int) << endl;
    cout << "The max double in array 2 is: " << max5(A_double) << endl;
    return 0;
}

template<typename T>
T max5(T Arr[5]) {
    T res = Arr[0];
    for (int i = 1; i < 5; ++i) {
        res = (Arr[i] > res) ? Arr[i] : res;
    }
    return res;
}