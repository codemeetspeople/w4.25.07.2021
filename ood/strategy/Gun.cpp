#include "Gun.hpp"

Gun::Gun(const char* title, int damage): Weapon(title, damage) {}

Gun::~Gun() {}

void Gun::attack(Unit* enemy) {
    enemy->takeDamage(this->damage);
}
