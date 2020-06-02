#ifndef SHOPPING_BASKET_SHOPPINGBASKET_H
#define SHOPPING_BASKET_SHOPPINGBASKET_H

#include <vector>
#include "Item.h"

using namespace std;

class ShoppingBasket {
private:
    vector<Item> items;
public:
    ShoppingBasket(vector<Item> &items);
    float total();

    float subtotal(const Item &item) const;
};


#endif //SHOPPING_BASKET_SHOPPINGBASKET_H
