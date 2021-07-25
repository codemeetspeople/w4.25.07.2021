#include "Rogue.hpp"

Rogue::Rogue(const char* name, int hitPoints, int damage) :
Unit(name, hitPoints, damage) {
    delete(this->state);
    this->state = new RogueState(name, hitPoints, damage, this);
}

Rogue::~Rogue() {}
