#include <iostream>
#include <queue>
#include <string>
void printBinaryNumbers(int n) {
    std::queue<std::string> q;
    q.push("1");
    for (int i = 1; i <= n; ++i) {
        std::string current = q.front();
        q.pop();
        std::cout << current << std::endl;
        q.push(current + "0");
        q.push(current + "1");
    }
}
int main() {
    int n;
    std::cin >> n;
    printBinaryNumbers(n);
    return 0;
}
