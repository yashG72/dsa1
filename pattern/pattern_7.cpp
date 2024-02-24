#include <iostream>

int main() {
    int n = 4;  // Set the number of rows for your pattern

    int current = 1;
    int row = 1;

    while (row <= n) {
        int col = 1;
        while (col <= row) {
            std::cout << current << "   ";
            current++;
            col++;
        }
        std::cout << std::endl;
        row++;
    }

    return 0;
}
