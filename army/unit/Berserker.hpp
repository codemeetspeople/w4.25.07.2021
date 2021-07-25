#ifndef BERSERKER_HPP
#define BERSERKER_HPP

#include "Unit.hpp"
#include "../state/BerserkerState.hpp"

class Berserker : public Unit {
    public:
        Berserker(const char* name="Berserker", int hitPoints=200, int damage=30);
        virtual ~Berserker();

};

#endif // BERSERKER_HPP
