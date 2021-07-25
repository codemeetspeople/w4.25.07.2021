#include "Weapon.hpp"

Weapon::Weapon(const char* title, int damage): title(title), damage(damage) {}

Weapon::~Weapon() {}

const int Weapon::getDamage() const {
    return this->damage;
}

const char* Weapon::getTitle() const {
    return this->title;
}

void Weapon::attack(Unit* enemy) {
    enemy->takeDamage(this->damage);
}
