#ifndef ROGUE_STATE_HPP
#define ROGUE_STATE_HPP

#include "State.hpp"

class RogueState : public State {
    public:
        RogueState(const char* name, int hitPoints, int damage, Unit* owner);
        virtual ~RogueState();
        virtual void attack(Unit* enemy);
};

#endif // ROGUE_STATE_HPP
