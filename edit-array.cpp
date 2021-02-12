#include <iostream>

int main() {
    int index, value;
    int myData[10];
    for (int i = 0; i < 10; ++i) {
        myData[i] = 1;
        std::cout << myData[i] << " ";
    }
    do {
        for (int i = 0; i < 10; ++i) {
            std::cout << myData[i] << " ";
        }
        std::cout << "\n" << "Input Index: ";
        std::cin >> index;
        std::cout << "\n" << "Input Value: ";
        std::cin >> value;
        myData[index] = value;
    } while (index < 10 && index >= 0);
    std::cout << "Index out of range. Exit";
}