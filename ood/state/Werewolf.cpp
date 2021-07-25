#include "Werewolf.hpp"

Werewolf::Werewolf(const char* title, int hpLimit, int dmg) {
    this->mainState = new State(title, hpLimit, dmg);
    this->altState = new State("Wolf", hpLimit*2, dmg*2);
}
Werewolf::~Werewolf() {}

void Werewolf::transform() {
    State* tmp = this->mainState;
    this->mainState = this->altState;
    this->altState = tmp;
}

const char* Werewolf::getTitle() const {
    return this->mainState->getTitle();
}
const int Werewolf::getHPLimit() const {
    return this->mainState->getHPLimit();
}
const int Werewolf::getHP() const {
    return this->mainState->getHP();
}
const int Werewolf::getDamage() const {
    return this->mainState->getDamage();
}

void Werewolf::takeDamage(int damage) {
    this->mainState->takeDamage(damage);
}

std::ostream& operator<<(std::ostream& out, const Werewolf& wolf) {
    out << wolf.getTitle() << " (" << wolf.getHPLimit() << "/";
    out << wolf.getHP() << ", " << wolf.getDamage() << ")";
    return out;
}
