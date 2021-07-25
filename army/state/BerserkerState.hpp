#ifndef BERSERKER_STATE_HPP
#define BERSERKER_STATE_HPP

#include "State.hpp"

class BerserkerState : public State {
    public:
        BerserkerState(const char* name, int hitPoints, int damage, Unit* owner);
        virtual ~BerserkerState();
        virtual void takeMagicDamage(int dmg);
};

#endif // BERSERKER_STATE_HPP