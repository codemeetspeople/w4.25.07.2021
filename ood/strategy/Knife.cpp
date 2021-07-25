#include "Knife.hpp"

Knife::Knife(const char* title, int damage): Weapon(title, damage) {}

Knife::~Knife() {}

void Knife::attack(Unit* enemy) {
    enemy->takeDamage(this->damage);
}
