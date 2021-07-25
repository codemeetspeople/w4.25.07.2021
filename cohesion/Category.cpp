#include "Category.hpp"

Category::Category(const char* title): title(title) {
    this->items = new std::set<Item*>();
}
Category::~Category() {
    delete this->items;
}

const std::set<Item*>& Category::getItems() const {
    return *(this->items);
}

const char* Category::getTitle() const {
    return this->title;
}

void Category::addItem(Item* item) {
    this->items->insert(item);
}

void Category::removeItem(Item* item) {
    this->items->erase(item);
}

std::ostream& operator<<(std::ostream& out, const Category& cat) {
    out << "Category " << cat.getTitle() << std::endl;

    std::set<Item*>::iterator it = cat.getItems().begin();
    for (; it != cat.getItems().end(); it++ ) {
        out << "-- " << (*it)->getTitle() << std::endl;
    }
    return out;
}
