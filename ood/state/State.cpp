#include "State.hpp"

State::State(const char* title, int hpLimit, int dmg)
     : title(title), hpLimit(hpLimit), hp(hpLimit), dmg(dmg) {}
State::~State() {}

const char* State::getTitle() const {
    return this->title;
}
const int State::getHPLimit() const {
    return this->hpLimit;
}
const int State::getHP() const {
    return this->hp;
}
const int State::getDamage() const {
    return this->dmg;
}

void State::takeDamage(int damage) {
    if ( this->hp == 0 ) {
        throw OutOfHPException();
    }
    if ( this->hp < damage ) {
        this->hp = 0;
        return;
    }
    this->hp -= damage;
}
