#include <iostream>

int f91(int n) {
    //如果 N <= 100, 那麼 f91(N) = f91( f91( N+11) )
    //如果 N >= 101, 那麼 f91(N) = N-10
    //規則如上，但實際上只要 N <= 100，f91(N)恆等於 91

    // N>101時，return n-10的值
    if (n >101) {
        return n-10;
    } else {
        // N<=100時，return 91
        return 91;
    }
}

int main() {
    // 宣告一個整數變數x，
    int x;
    // 當輸入的x不等於0時，持續執行，並輸出f91(x)的值，X=0時結束
    while (std::cin >> x,x != 0) {
        // 輸出f91(x)的值
        std::cout << "f91(" << x << ") = " << f91(x) << std::endl;
    }
}