#include "Unit.hpp"

Unit::Unit(const char* name, int hitPoints, int damage) {
    this->state = new State(name, hitPoints, damage, this);
}

Unit::~Unit() {
    // delete(this->state); TODO: make powerful research
}

const char* Unit::getName() const {
    return this->state->getName();
}

int Unit::getHitPoints() const {
    return this->state->getHitPoints();
}

int Unit::getHitPointsLimit() const {
    return this->state->getHitPointsLimit();
}

int Unit::getDamage() const {
    return this->state->getDamage();
}

void Unit::takePhisicalDamage(int dmg) {
    this->state->takePhisicalDamage(dmg);
}

void Unit::takeMagicDamage(int dmg) {
    this->state->takeMagicDamage(dmg);
}

void Unit::attack(Unit* enemy) {
    this->state->attack(enemy);
}

void Unit::counterAttack(Unit* enemy) {
    this->state->counterAttack(enemy);
}

std::ostream& operator<<(std::ostream& out, const Unit unit) {
    out << unit.getName() << "[";
    out << unit.getHitPoints() << "/" << unit.getHitPointsLimit();
    out << ", " << unit.getDamage() << "]";

    return out;
}
