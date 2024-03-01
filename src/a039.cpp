#include <iostream>
int main() {
    int total_score = 0;
    int sides[5][3];
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cin >> sides[i][j];
        }
    }
    for (int i = 0; i < 5; ++i) {
        int triangle_score = 0;
        for (int j = 0; j < 3; ++j) {
            triangle_score += sides[i][j] + 1;
        }
        total_score += triangle_score;
    }
    std::cout << total_score << std::endl;
    return 0;
}