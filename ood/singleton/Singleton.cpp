#include "Singleton.hpp"

Singleton* Singleton::instance = NULL;

Singleton::Singleton() {}

Singleton* Singleton::getInstance() {
    if ( instance == NULL ) {
        instance = new Singleton();
    }
    return instance;
}
