#include <iostream>
#include "Item.hpp"
#include "Category.hpp"

int main() {
    Category* cat = new Category("Tech");
    Category* apple = new Category("Apple");
    Item* iphone = new Item(cat, "iPhone");
    Item* galaxy = new Item(cat, "Samsung Galaxy");


    std::cout << *cat << std::endl;

    iphone->setCategory(apple);

    std::cout << *cat << std::endl;
    std::cout << *apple << std::endl;

    delete iphone;
    delete galaxy;
    delete cat;

    return 0;
}