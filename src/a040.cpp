#include <iostream>
int main() {
    int a,b,x;
    std::cin >> a >> b;
    for (int year = a; year <= b; year++) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) x++;
    }
    std::cout << x<< std::endl;
}