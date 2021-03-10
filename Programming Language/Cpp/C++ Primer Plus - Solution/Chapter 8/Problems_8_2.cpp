#include<iostream>
#include<string>
using namespace std;

struct CandyBar{
    string brand;
    double weight;
    int calory;
};

void setCandyBar(CandyBar& candy, const char* b = "Millennium Munch", const double weight = 2.85, const int calory = 350);

int main() {
    CandyBar candy;
    setCandyBar(candy);
    cout << candy.brand << endl;
    cout << candy.weight << endl;
    cout << candy.calory << endl;
}

void setCandyBar(CandyBar& candy, const char* brand, const double weight, const int calory) {
    candy.brand = brand;
    candy.weight = weight;
    candy.calory = calory;
}