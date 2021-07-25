#ifndef ROGUE_HPP
#define ROGUE_HPP

#include "Unit.hpp"
#include "../state/RogueState.hpp"

class Rogue : public Unit {
    public:
        Rogue(const char* name="Rogue", int hitPoints=150, int damage=30);
        virtual ~Rogue();
};

#endif // ROGUE_HPP
