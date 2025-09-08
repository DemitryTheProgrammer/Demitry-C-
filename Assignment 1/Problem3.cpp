#include <iostream>
#include <cmath>

int main() {
    int num;
    std::cout << "Enter an integer number to see if the given number is divisible by 4 or not: ";
    std::cin >> num;

    if (num < 0) {
        std::cout << "The program does not accept negative numbers" << std::endl;
    } else if (num >= 0 && num <= 100) {
        if (num % 4 == 0) {
            std::cout << "The given number (" << num << ") is divisible by 4" << std::endl;
        } else {
            std::cout << "The given number (" << num << ") is not divisible by 4" << std::endl;
        }
        std::cout << "Quotient: " << num / 4 << " and Remainder: " << num % 4 << std::endl;
    } else { // num > 100
        std::cout << "The entered number is greater than 100 and square root of the number is " << sqrt(num) << std::endl;
    }

    return 0;
}