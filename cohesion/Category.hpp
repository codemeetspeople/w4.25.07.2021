#ifndef CATEGORY_HPP
#define CATEGORY_HPP

#include <iostream>
#include <set>
#include "Item.hpp"

class Item;

class Category {
    private:
        std::set<Item*>* items;
        const char* title;

    public:
        Category(const char* title);
        virtual ~Category();

        const std::set<Item*>& getItems() const;
        const char* getTitle() const;

        void addItem(Item* item);
        void removeItem(Item* item);
};

std::ostream& operator<<(std::ostream& out, const Category& cat);


#endif // CATEGORY_HPP