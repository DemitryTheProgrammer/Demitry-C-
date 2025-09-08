#include <iostream>
#include <string>

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);

    std::cout << "Characters at odd positions: ";
    for (int i = 0; i < str.length(); ++i) {
        if (i % 2 != 0) {
            std::cout << str[i];
        }
    }
    std::cout << std::endl;

    return 0;
}