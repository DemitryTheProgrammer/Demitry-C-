#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    double s;
    std::cout << "Enter the side: ";
    std::cin >> s;

    // Area = (6 * s^2) / (4 * tan(pi/6))
    double area = (6 * pow(s, 2)) / (4 * tan(M_PI / 6.0));

    std::cout << "The area of the hexagon is " << std::fixed << std::setprecision(2) << area << std::endl;
    return 0;
}