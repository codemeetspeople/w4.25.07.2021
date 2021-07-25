#include <iostream>
#include "Unit.hpp"
#include "Knife.hpp"
#include "Gun.hpp"


int main() {
    Unit* attacker = new Unit("Attacker", 100);
    Unit* victim = new Unit("Victim", 150);

    std::cout << *attacker << std::endl;
    std::cout << *victim << std::endl;

    attacker->attack(victim);

    std::cout << *attacker << std::endl;
    std::cout << *victim << std::endl;

    attacker->changeWeapon(new Gun());

    attacker->attack(victim);

    std::cout << *attacker << std::endl;
    std::cout << *victim << std::endl;

    delete attacker;
    delete victim;

    return 0;
}