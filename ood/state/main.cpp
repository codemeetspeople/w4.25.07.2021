#include <iostream>
#include "Werewolf.hpp"

int main() {
    Werewolf* werewolf = new Werewolf("Jack", 100, 20);

    std::cout << *werewolf << std::endl;
    werewolf->transform();
    std::cout << *werewolf << std::endl;
    werewolf->transform();
    std::cout << *werewolf << std::endl;

    delete werewolf;
    return 0;
}
