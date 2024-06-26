#include <iostream>
#include <vector>

int main() {
    //宣告變數 n
    int n;
    //輸入 n
    std::cin >> n;
    //宣告一個大小為 n 的 vector
    std::vector<int> seats(n);
    for (int i = 0; i < n; i++) {
        std::cin >> seats[i];
    }

    for (int i = 0; i < n / 2; i++) {
        std::cout << seats[i] << " " << seats[n - i - 1] << std::endl;
    }

    return 0;
}