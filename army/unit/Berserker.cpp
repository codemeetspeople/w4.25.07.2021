#include "Berserker.hpp"

Berserker::Berserker(const char* name, int hitPoints, int damage) :
    Unit(name, hitPoints, damage) {
    delete(this->state);
    this->state = new BerserkerState(name, hitPoints, damage, this);
}

Berserker::~Berserker() {}
