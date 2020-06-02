#include "Item.h"

Item::Item(float unitPrice, int quantity) {
    this->unitPrice = unitPrice;
    this->quantity = quantity;
}

float Item::getUnitPrice() const {
    return unitPrice;
}

int Item::getQuantity() const {
    return quantity;
}

float Item::subtotal() const { return this->getUnitPrice() * this->getQuantity(); }
