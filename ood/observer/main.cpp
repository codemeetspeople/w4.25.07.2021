#include <iostream>
#include "Observer.hpp"
#include "Observable.hpp"

int main() {
    Observer* batman = new Observer("Batman");
    Observer* superman = new Observer("SuperMan");

    Observable* robin = new Observable("Robin");
    Observable* joker = new Observable("Joker");

    catwoman->addObserver(batman);

    superman->addObservable(robin);
    superman->addObservable(joker);

    batman->addObservable(robin);
    batman->addObservable(joker);

    batman->reportObservables();
    std::cout << std::endl;

    superman->reportObservables();
    std::cout << std::endl;

    robin->reportObservers();
    std::cout << std::endl;

    joker->reportObservers();
    std::cout << std::endl;

    batman->notify();
    superman->notify();

    delete superman;

    robin->reportObservers();
    std::cout << std::endl;

    joker->reportObservers();
    std::cout << std::endl;

    return 0;
}
