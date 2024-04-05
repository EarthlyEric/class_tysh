#include <iostream>

int main() {
    // 宣告a和b為0
    int a = 0, b = 0;
    // 宣告 x 和 y 為長度為4的字元陣列
    char x[4], y[4];
    // 輸入 x 和 y。
    std::cin >> x >> y;
    
    for (int i = 0; i < 4; i++) {
        // 如果 x[i] 等於 y[i] 則 a 加1
        if (x[i] == y[i]) {
            a++;
        } else {
            // 否則 檢查 x[i] 是否在 y 中
            for (int j = 0; j < 4; j++) {
                // 如果有，則 b 加1。
                if (x[i] == y[j]) {
                    b++;
                    // 並且跳出迴圈
                    break;
                }
            }
        }
    }
    // 輸出 a 和 b。
    std::cout << a << "A" << b << "B";
}