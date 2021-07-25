#include "Item.hpp"

Item::Item(Category* category, const char* title): category(category), title(title) {
    this->category->addItem(this);
}

Item::~Item() {
    this->category->removeItem(this);
}

const Category& Item::getCategory() const {
    return *(this->category);
}

const char* Item::getTitle() const {
    return this->title;
}

void Item::setCategory(Category* newCategory) {
    this->category->removeItem(this);
    this->category = newCategory;
    this->category->addItem(this);
}
