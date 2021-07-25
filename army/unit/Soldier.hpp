#ifndef SOLDIER_HPP
#define SOLDIER_HPP

#include "Unit.hpp"

class Soldier : public Unit {
    public:
        Soldier(const char* name="Soldier", int hitPoints=200, int damage=20);
        virtual ~Soldier();
};

#endif // SOLDIER_HPP
