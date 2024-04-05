#include <iostream>
int main() {
    int x, y;
    int max = 0;
    std::cin >> x;
    for (int i = 0; i < x; ++i) {
        std::cin >> y;
        if (y > max) {
            max = y;
        }
    }
    std::cout << max << '\n'; 
}