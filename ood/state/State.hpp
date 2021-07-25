#ifndef STATE_HPP
#define STATE_HPP

class OutOfHPException {};

class State {
    private:
        const char* title;
        int hpLimit;
        int hp;
        int dmg;

    public:
        State(const char* title, int hpLimit, int dmg);
        virtual ~State();

        const char* getTitle() const;
        const int getHPLimit() const;
        const int getHP() const;
        const int getDamage() const;

        virtual void takeDamage(int damage);
};


#endif // STATE_HPP
