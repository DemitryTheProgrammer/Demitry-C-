/*
    Demitry Box-Louine (Name)
    (File Name)
    (Program)
    9/10/2025 (Date)
    (Program Description)
*/

#include <iostream>
using namespace std;

int getDigit(int n);

int main() {
    int n = 0;
    std::cout << "Enter an integer: ";
    std::cin >> n;

    std::cout << "The number you entered has " << getDigit(n) << " numbers." << endl;
}

int getDigit(int n) {
    int count = 0;
    // std::cout << n << endl;
    while(n != 0) {
        n = n / 10;
        count++;

    }
    

    
    return count;
}

