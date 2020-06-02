#include <vector>
#include <assert.h>
#include "ShoppingBasket.h"

void testSingleItemQuantityTwo() {
    vector<Item> items = {*new Item(100.0, 2)};
    ShoppingBasket &basket = *new ShoppingBasket(items);
    assert(basket.total() == 200.0);
}

void testTwoItemsQuantityOne() {
    vector<Item> items = {*new Item(100.0, 1), *new Item(100.0, 1)};
    ShoppingBasket &basket = *new ShoppingBasket(items);
    assert(basket.total() == 200.0);
}

void testSingleItemQuantityOne() {
    vector<Item> items = {*new Item(100.0, 1)};
    ShoppingBasket &basket = *new ShoppingBasket(items);
    assert(basket.total() == 100.0);
}

void testEmptyBasket() {
    vector<Item> items = {};
    ShoppingBasket &basket = *new ShoppingBasket(items);
    assert(basket.total() == 0);
}

int main() {
    testEmptyBasket();
    testSingleItemQuantityOne();
    testTwoItemsQuantityOne();
    testSingleItemQuantityTwo();
    return 0;
}
