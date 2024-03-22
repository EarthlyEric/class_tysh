#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;

    std::vector<int> seats(n);
    for (int i = 0; i < n; i++) {
        std::cin >> seats[i];
    }

    for (int i = 0; i < n / 2; i++) {
        std::cout << seats[i] << " " << seats[n - i - 1] << std::endl;
    }

    return 0;
}