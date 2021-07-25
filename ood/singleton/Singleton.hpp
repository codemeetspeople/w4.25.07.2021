#ifndef SINGLETON_HPP
#define SINGLETON_HPP

#include <iostream>

class Singleton {
    private:
        Singleton();
        static Singleton* instance;
    public:
        static Singleton* getInstance();
};

#endif // SINGLETON_HPP
