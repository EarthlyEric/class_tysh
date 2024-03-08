#include <iostream>

int main() {
    int x;
    while (std::cin >> x) {
        int result = 0;
        for (int i = 1; i <= x; i++) {
            result += i;
        }
        std::cout << result << '\n';
    }
}