/*Write a program that uses the following functions:
Fill_array() takes as arguments the name of an array of double values and an
array size. It prompts the user to enter double values to be entered in the array. It
ceases taking input when the array is full or when the user enters non-numeric
input,and it returns the actual number of entries.
Show_array() takes as arguments the name of an array of double values and an
array size and displays the contents of the array.
Reverse_array() takes as arguments the name of an array of double values and an
array size and reverses the order of the values stored in the array.
The program should use these functions to fill an array, show the array, reverse the
array, show the array, reverse all but the first and last elements of the array,and then
show the array.*/

#include<iostream>
using namespace std;
void Fill_array(int*, int, int);
void Show_array(int*, int);
void Reverse_array(int*, int);

int main() {
    const int SIZE = 10;
    int arr[SIZE];
    for (int i = 0; i < SIZE; ++i) {
        cin >> arr[i];
    }
    cout << "The array you inputed is:\n";
    Show_array(arr, SIZE);
    cout << "The reversed array is:\n";
    Reverse_array(arr, SIZE);
    Show_array(arr, SIZE);
    cout << "Fill the array with 5:\n";
    Fill_array(arr, SIZE, 5);
    Show_array(arr, SIZE);
    
    return 0;
}

void Fill_array(int* arr, int n, int target) {
    for (int i = 0; i < n; ++i) {
        arr[i] = target;
    }    
}

void Show_array(int* arr, int n) {
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << ' ';
    }
    cout << endl;
}

void Reverse_array(int* arr, int n) {
    if (n <= 1)
        return;
    int l = 0, r = n - 1;
    while (l < r) {
        swap(arr[l], arr[r]);
        l++;
        r--;
    }
}