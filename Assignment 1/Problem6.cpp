#include <iostream>

int main() {
    int num, sum = 0, digit;
    std::cout << "Enter an integer between 0 and 1000000: ";
    std::cin >> num;

    int temp_num = num;
    while (temp_num > 0) {
        digit = temp_num % 10;
        sum += digit;
        temp_num /= 10;
    }

    std::cout << "The sum of the digits is " << sum << std::endl;

    // Bonus problem logic
    int bonus_sum = sum;
    if (bonus_sum > 9) {
        int temp_bonus_sum = bonus_sum;
        bonus_sum = 0;
        while (temp_bonus_sum > 0) {
            bonus_sum += temp_bonus_sum % 10;
            temp_bonus_sum /= 10;
        }
    }
    std::cout << "The repeated sum of the digits is " << bonus_sum << std::endl;

    return 0;
}