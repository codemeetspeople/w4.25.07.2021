#include <iostream>

#include "unit/Soldier.hpp"
#include "unit/Rogue.hpp"
#include "unit/Berserker.hpp"

int main() {
    Soldier* soldier = new Soldier();
    Rogue* rogue = new Rogue();
    Berserker* berserker = new Berserker();

    std::cout << *rogue << std::endl;
    std::cout << *soldier << std::endl;
    std::cout << *berserker << std::endl << std::endl;

    std::cout << "Phisical damage test:" << std::endl;

    rogue->takePhisicalDamage(20);
    soldier->takePhisicalDamage(20);
    berserker->takePhisicalDamage(20);

    std::cout << *rogue << std::endl;
    std::cout << *soldier << std::endl;
    std::cout << *berserker << std::endl << std::endl;

    std::cout << "Magic damage test:" << std::endl;

    rogue->takeMagicDamage(20);
    soldier->takeMagicDamage(20);
    berserker->takeMagicDamage(20);

    std::cout << *rogue << std::endl;
    std::cout << *soldier << std::endl;
    std::cout << *berserker << std::endl << std::endl;


    delete(soldier);
    delete(rogue);
    delete(berserker);

    return 0;
}