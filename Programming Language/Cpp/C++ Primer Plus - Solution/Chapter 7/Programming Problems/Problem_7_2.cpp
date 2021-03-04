/*Write a program that asks the user to enter up to 10 golf scores, which are to be
stored in an array.You should provide a means for the user to terminate input prior
to entering 10 scores.The program should display all the scores on one line and
report the average score. Handle input, display,and the average calculation with
three separate array-processing functions.*/

#include<iostream>

using namespace std;
double avgScore(int*, int);
void dspArr(int*, int);

int main() {
    const int SIZE = 10;
    int scArr[SIZE];
    for (int i = 0; i < SIZE; ++i) {
        cin >> scArr[i];
    }
    cout << "The 10 scores are: \n";
    dspArr(scArr, SIZE);
    cout << "The average score is: " << avgScore(scArr, SIZE);
}

double avgScore(int* arr, int n) {
    int res = 0;
    for (int i = 0; i < n; ++i) {
        res += arr[i];
    }
    return (double)res/n;
}

void dspArr(int* arr, int n) {
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << ' ';
    }
    cout << endl;
}