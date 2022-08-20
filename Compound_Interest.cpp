#include <iostream>
#include <cmath>

using namespace std;

int main (){

    int capital;
    double interestRate;
    int numberOfYears;

    cout << "How much are you investing ? \n";
    cin >> capital;
    cout << "What’s the annual interest rate (in %) ? \n";
    cin >> interestRate;
    cout << "For how long (years) ?\n";
    cin >> numberOfYears;
    double finalBalance =
    pow (1.0 + interestRate * 0.01, numberOfYears) * capital;
    double interest = finalBalance - capital;
    cout << " You will earn: " << interest << "\n";
    return 0;
}