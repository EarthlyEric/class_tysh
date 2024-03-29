#include <iostream>

int f91(int n) {
    if (n >101) {
        return n-10;
    } else {
        return 91;
    }
}

int main() {
    int x;
    while (std::cin >> x,x != 0) {
        std::cout << "f91(" << x << ") = " << f91(x) << std::endl;
    }
}