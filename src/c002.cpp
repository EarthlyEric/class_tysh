#include <iostream>
#include <vector>

int main() {

    int n, k;
    std::cin >> n >> k;

    std::vector<std::vector<int>> groups(k);
    for (int i = 0; i < n; i++) {
        int x;
        std::cin >> x;
        groups[x % k].push_back(x);
    }

    for (int i = 0; i < k; i++) {
        std::cout << "Group" << i + 1 << " :";
        for (int j = 0; j < groups[i].size(); j++) {
            std::cout << " " << groups[i][j];
        }
        std::cout << std::endl;
    }

    return 0;
}