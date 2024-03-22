#include <iostream>

int main() {
    int n;
    while (std::cin >> n)
    {
        int i = 0;
        int x = n;
        while (x != 1)
        { if (x % 2 == 0){x = x / 2;}else{x = 3 * x + 1;} i = i + 1;}
        std::cout << i << '\n';
    }
}