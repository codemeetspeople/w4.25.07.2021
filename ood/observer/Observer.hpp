#ifndef OBSERVER
#define OBSERVER

#include <iostream>
#include <set>
#include "Observable.hpp"

class Observable;

class Observer {
    private:
        std::set<Observable*>* observables;
        const char* name;
    public:
        Observer(const char* name="Observer");
        ~Observer();

        const char* getName();
        void reportObservables();

        void notify();

        void addObservable(Observable* observable);
        void removeObservable(Observable* observable);
};

#endif // OBSERVER
