#include "Unit.hpp"
#include "Knife.hpp"

Unit::Unit(const char* title, int hp): title(title), hp(hp) {
    this->weapon = new Knife();
}

Unit::~Unit() {
    delete this->weapon;
}

const char* Unit::getTitle() const {
    return this->title;
}

const int Unit::getHP() const {
    return this->hp;
}

void Unit::takeDamage(int damage) {
    if ( this->hp == 0 ) {
        throw UnitIsDeadException();
    }
    if ( this->hp < damage ) {
        this->hp = 0;
        return;
    }
    this->hp -= damage;
}

void Unit::attack(Unit* enemy) {
    this->weapon->attack(enemy);
}

void Unit::changeWeapon(Weapon* newWeapon) {
    delete this->weapon;
    this->weapon = newWeapon;
}

std::ostream& operator<<(std::ostream& out, const Unit& unit) {
    out << unit.getTitle() << ": " << unit.getHP();
    return out;
}
