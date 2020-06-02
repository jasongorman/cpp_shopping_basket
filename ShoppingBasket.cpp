#include "ShoppingBasket.h"

ShoppingBasket::ShoppingBasket(vector<Item> &items) {
    this->items = items;
}

float ShoppingBasket::total() {
    float total = 0.0;
    if(!items.empty())
        for(int i = 0; i < items.size(); i++){
            const Item &item = items[i];
            total += (item.subtotal());
        }
    return total;
}
