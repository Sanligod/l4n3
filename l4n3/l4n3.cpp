#include <iostream>

void printOddNumbers() {
    int num;
    std::cin >> num;

    if (num == 0) {
        return;
    }

    if (num % 2 != 0) {
        std::cout << num << " ";
    }

    printOddNumbers();
}

int main() {
    printOddNumbers();

    return 0;
}
