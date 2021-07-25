#ifndef STATE_HPP
#define STATE_HPP

#include "../unit/Unit.hpp"

class Unit;

class State {
    protected:
        const char* name;
        int hitPoints;
        int hitPointsLimit;
        int damage;

        void ensureIsAlive();
        virtual void takeDamage(int dmg);
        Unit* owner;

    public:
        State(const char* name, int hitPoints, int damage, Unit* owner);
        virtual ~State();

        const char* getName() const;
        int getHitPoints() const;
        int getHitPointsLimit() const;
        int getDamage() const;

        virtual void takePhisicalDamage(int dmg);
        virtual void takeMagicDamage(int dmg);

        virtual void attack(Unit* enemy);
        virtual void counterAttack(Unit* enemy);
};


#endif // STATE_HPP