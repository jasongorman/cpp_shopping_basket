#ifndef SHOPPING_BASKET_ITEM_H
#define SHOPPING_BASKET_ITEM_H


class Item {
private:
    float unitPrice;
    int quantity;
public:
    Item(float unitPrice, int quantity);

    float subtotal() const;
};


#endif //SHOPPING_BASKET_ITEM_H
