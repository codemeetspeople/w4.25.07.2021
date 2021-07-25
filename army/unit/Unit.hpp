#ifndef UNIT_HPP
#define UNIT_HPP

#include <iostream>
#include "../state/State.hpp"

class State;

class Unit {
    protected:
        State* state;

    public:
        Unit(const char* name, int hitPoints, int damage);
        virtual ~Unit();

        const char* getName() const;
        int getHitPoints() const;
        int getHitPointsLimit() const;
        int getDamage() const;

        void takePhisicalDamage(int dmg);
        void takeMagicDamage(int dmg);

        virtual void attack(Unit* enemy);
        virtual void counterAttack(Unit* enemy);

};

std::ostream& operator<<(std::ostream& out, const Unit unit);

#endif // UNIT_HPP
