#include <iostream>
int main() {
    int x, y, max;
    std::cin >> x;
    for (int i = 0; i < x; ++i) {
        std::cin >> y;
        if (y > max) {
            max = y;
        }
    }
    std::cout << max << '\n'; 
}