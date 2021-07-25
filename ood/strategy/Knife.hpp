#ifndef KNIFE_HPP
#define KNIFE_HPP

#include "Weapon.hpp"

class Knife : public Weapon {
    public:
        Knife(const char* title="Knife", int damage=10);
        virtual ~Knife();
        virtual void attack(Unit* enemy);
};

#endif // KNIFE_HPP
