#include <iostream>

int main() {
    int a = 0, b = 0;
    char x[4], y[4];
    std::cin >> x >> y;
    for (int i = 0; i < 4; i++) {
        if (x[i] == y[i]) {
            a++;
        } else {
            for (int j = 0; j < 4; j++) {
                if (x[i] == y[j]) {
                    b++;
                    break;
                }
            }
        }
    }
    std::cout << a << "A" << b << "B";
    return 0;
}