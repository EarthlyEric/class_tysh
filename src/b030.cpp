#include <iostream>

int main() {
    int n;
    std::cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            std::cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            std::cout << i;
        }
        std::cout << " ";
        for (int j = 1; j <= i; j++) {
            std::cout << i;
        }
        std::cout << std::endl;
    }
}