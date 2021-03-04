/*Many state lotteries use a variation of the simple lottery portrayed by Listing 7.4. In
these variations you choose several numbers from one set and call them the field
numbers. For example, you might select five numbers from the field of 1¨C47).You
also pick a single number (called a mega number or a power ball, etc.) from a second range, such as 1¨C27.To win the grand prize, you have to guess all the picks correctly.The chance of winning is the product of the probability of picking all the field numbers times the probability of picking the mega number. For instance, the probability of winning the example described here is the product of the probability of picking 5 out of 47 correctly times the probability of picking 1 out of 27 correctly. Modify Listing 7.4 to calculate the probability of winning this kind of lottery.*/

#include<iostream>
using namespace std;
long double probability(unsigned numbers, unsigned picks);

int main() {
    double total1, choices1, total2, choices2;
    cout << "Enter the total number of choices on the game card and the number of picked allowed: \n";
    while ((cin >> total1 >> choices1 >> total2 >> choices2) && choices1 <= total1 && choices2 <= total2) {
        cout << "You have one chance in ";
        cout << probability(total1, choices1) * probability(total2, choices2);
        cout << " of wining.\n";
        cout << "Next two numbers (q to quit)\n";
    }
    cout << "bye\n";
    return 0;
}

long double probability(unsigned numbers, unsigned picks) {
    long double result = 1;
    long double n;
    unsigned p;
    
    for (n = numbers, p = picks; p > 0; n--, p--) {
        result *= (n / p);
    }
    return result;
}