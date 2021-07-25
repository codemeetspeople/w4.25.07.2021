#include <iostream>
#include "Singleton.hpp"

int main() {
    Singleton* obj = Singleton::getInstance();
    Singleton* obj2 = Singleton::getInstance();

    std::cout << obj << std::endl;
    std::cout << obj2 << std::endl;

    return 0;
}