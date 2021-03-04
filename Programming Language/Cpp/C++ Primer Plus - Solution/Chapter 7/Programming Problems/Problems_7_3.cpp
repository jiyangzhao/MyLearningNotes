/*Here is a structure declaration:
struct box
{
char maker[40];
float height;
float width;
float length;
float volume;
};
a. Write a function that passes a box structure by value and that displays the
value of each member.
b. Write a function that passes the address of a box structure and that sets the
volume member to the product of the other three dimensions.
c. Write a simple program that uses these two functions.*/

#include<iostream>

using namespace std;

struct box {
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void displayBox(box);
void setVolume(box*);

int main() {
    box b;
    cout << "Input the height of your box:\n";
    cin >> b.height;
    cout << "Input the width of your box:\n";
    cin >> b.width;
    cout << "Input the length of your box:\n";
    cin >> b.length;
    setVolume(&b);
    displayBox(b);
    
    return 0;
}

void displayBox(box b) {
    cout << "The height of this box is " << b.height << endl;
    cout << "The width of this box is " << b.width << endl;
    cout << "The length of this box is " << b.length << endl;
    cout << "The volume of this box is " << b.volume << endl;
}

void setVolume(box* b) {
    b->volume = b->height * b->width * b->length;
}