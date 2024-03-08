#include <iostream>
#include <cmath>

int factorial(int num) {
    if (num == 0) {
        return 1;
    }
    int result = 1;
    for (int i = 1; i <= num; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int n, m;
    while (std::cin >> n >> m) {
        int result = std::pow(n, m) + (factorial(n) / factorial(m));
        std::cout << result << std::endl;
    }
    return 0;
}