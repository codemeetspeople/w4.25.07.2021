#include "BerserkerState.hpp"

BerserkerState::BerserkerState(const char* name, int hitPoints, int damage, Unit* owner) :
    State(name, hitPoints, damage, owner) {}

BerserkerState::~BerserkerState() {}

void BerserkerState::takeMagicDamage(int dmg) {}
