#include <iostream>

int main (){
    int favoriteNumber;
    std::cout << "Enter your favorite number: ";
    std::cin >> favoriteNumber;
    std::cout << "That's an amazing number!" << std::endl;
    std::cout << "No really, I think " + std::to_string(favoriteNumber) + " is an amazing number!" << std::endl;
    std::cin.ignore();
    std::cin.get();
    return 0;
}