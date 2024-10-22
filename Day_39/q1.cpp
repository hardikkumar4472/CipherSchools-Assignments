#include <iostream>

double pow(double x, int n) {
    if (n == 0) return 1;
    if (n < 0) {
        x = 1 / x;
        n = -n;
    }
    double result = 1;
    while (n) {
        if (n % 2) result *= x;
        x *= x;
        n /= 2;
    }
    return result;
}

int main() {
    double x;
    int n;
    std::cout << "Enter daily energy production (x): ";
    std::cin >> x;
    std::cout << "Enter number of days (n): ";
    std::cin >> n;
    double totalEnergy = pow(x, n);
    std::cout << totalEnergy << " kWh" << std::endl;
    return 0;
}
