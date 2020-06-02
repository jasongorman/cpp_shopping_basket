#include "Item.h"

Item::Item(float unitPrice, int quantity) {
    this->unitPrice = unitPrice;
    this->quantity = quantity;
}

float Item::subtotal() const { return unitPrice * quantity; }
