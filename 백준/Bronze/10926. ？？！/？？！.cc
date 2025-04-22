#include <iostream>

int main() {
    char* ptr = new char[51];
    std::cin >> ptr;
    std::cout << ptr << "??!"<<std::endl;
    delete[] ptr;
}