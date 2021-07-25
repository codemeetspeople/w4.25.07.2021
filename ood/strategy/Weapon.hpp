#ifndef WEAPON_HPP
#define WEAPON_HPP

#include "Unit.hpp"

class Unit;

class Weapon {
    protected:
        int damage;
        const char* title;
    public:
        Weapon(const char* title, int damage);
        virtual ~Weapon();

        virtual const int getDamage() const;
        virtual const char* getTitle() const;

        virtual void attack(Unit* enemy) = 0;
};

#endif // WEAPON_HPP
