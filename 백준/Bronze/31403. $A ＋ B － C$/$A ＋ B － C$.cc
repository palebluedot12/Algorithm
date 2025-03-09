#include <iostream>
#include <string>

int main() {
    std::string A, B, C;
    std::cin >> A >> B >> C;

    int numA = std::stoi(A);
    int numB = std::stoi(B);
    int numC = std::stoi(C);

    std::cout << numA + numB - numC << std::endl;

    std::string AB_concat = A + B;
    int numAB_concat = std::stoi(AB_concat);
    std::cout << numAB_concat - numC << std::endl;

    return 0;
}
