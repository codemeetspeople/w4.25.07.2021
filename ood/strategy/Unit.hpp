#ifndef UNIT_HPP
#define UNIT_HPP

#include <iostream>

class UnitIsDeadException {};

class Weapon;

class Unit {
    private:
        const char* title;
        int hp;
        Weapon* weapon;

    public:
        Unit(const char* title="Soldier", int hp=100);
        virtual ~Unit();

        const char* getTitle() const;
        const int getHP() const;

        void takeDamage(int damage);

        void attack(Unit* enemy);
        void changeWeapon(Weapon* newWeapon);
};

std::ostream& operator<<(std::ostream& out, const Unit& unit);

#endif // UNIT_HPP