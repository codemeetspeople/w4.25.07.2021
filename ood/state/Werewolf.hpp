#ifndef WEREWOLF_HPP
#define WEREWOLF_HPP

#include <iostream>
#include "State.hpp"

class Werewolf {
    private:
        State* mainState;
        State* altState;
    public:
        Werewolf(const char* title, int hpLimit, int dmg);
        virtual ~Werewolf();

        void transform();

        const char* getTitle() const;
        const int getHPLimit() const;
        const int getHP() const;
        const int getDamage() const;

        virtual void takeDamage(int damage);
};

std::ostream& operator<<(std::ostream& out, const Werewolf& wolf);

#endif // WEREWOLF_HPP
