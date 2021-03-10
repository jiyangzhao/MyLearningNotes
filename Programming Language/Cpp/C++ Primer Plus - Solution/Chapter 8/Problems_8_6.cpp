/*
Write a template function maxn() that takes as its arguments an array of items of
type T and an integer representing the number of elements in the array and that
returns the largest item in the array.Test it in a program that uses the function template with an array of six int value and an array of four double values.The program should also include a specialization that takes an array of pointers-to-char as
an argument and the number of pointers as a second argument and that returns the
address of the longest string. If multiple strings are tied for having the longest
length, the function should return the address of the first one tied for longest.Test
the specialization with an array of five string pointers
*/

#include<iostream>
#include<cstring>
using namespace std;

template <typename T>
T maxn(T Arr[], int len);

template<> char * maxn(char * p[], int len);

int main() {
    int A_int[6] = {1, 3, 2, 8, 2, 12};
    double A_double[4] = {0.0, 2.1, 1.9, 3.4};
    cout << "The max int in array 1 is: " << maxn(A_int, 6) << endl;
    cout << "The max double in array 2 is: " << maxn(A_double, 4) << endl;
    char* A_str[5] = {"one", "two", "three", "four", "fifths"};
    cout << "The longest string in array 3 is: " << maxn(A_str, 5) << endl;
    return 0;
}

template<typename T>
T maxn(T Arr[], int len) {
    T res = Arr[0];
    for (int i = 1; i < len; ++i) {
        res = (Arr[i] > res) ? Arr[i] : res;
    }
    return res;
}

template<> char * maxn(char * p[], int len) {
    int j = 0;
    int maxlen = 0;
    for (int i = 0; i < len; ++i) {
        if (maxlen < strlen(p[i])) {
            maxlen = strlen(p[i]);
            j = i;
        }
    }
    return p[j];
}