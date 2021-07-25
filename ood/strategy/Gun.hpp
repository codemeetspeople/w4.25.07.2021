#ifndef GUN_HPP
#define GUN_HPP

#include "Weapon.hpp"

class Gun : public Weapon {
    public:
        Gun(const char* title="Gun", int damage=30);
        virtual ~Gun();
        virtual void attack(Unit* enemy);
};

#endif // GUN_HPP
