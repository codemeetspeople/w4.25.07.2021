#ifndef ITEM_HPP
#define ITEM_HPP

#include <iostream>
#include "Category.hpp"

class Category;

class Item {
    private:
        Category* category;
        const char* title;

    public:
        Item(Category* category, const char* title);
        virtual ~Item();

        const Category& getCategory() const;
        const char* getTitle() const;

        virtual void setCategory(Category* newCategory);
};

#endif // ITEM_HPP
