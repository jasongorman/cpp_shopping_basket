#include "gtest/gtest.h"
#include "ShoppingBasket.h"

TEST(ShoppingBasketTest, EmptyBasket){
    vector<Item> items = {};
    ShoppingBasket &basket = *new ShoppingBasket(items);
    ASSERT_EQ(basket.total(), 0.0);
}

TEST(ShoppingBasketTest, SingleItemQuantityTwo) {
    vector<Item> items = {*new Item(100.0, 2)};
    ShoppingBasket &basket = *new ShoppingBasket(items);
    ASSERT_EQ(basket.total(), 200.0);
}

TEST(ShoppingBasketTest, TwoItemsQuantityOne) {
    vector<Item> items = {*new Item(100.0, 1), *new Item(100.0, 1)};
    ShoppingBasket &basket = *new ShoppingBasket(items);
    ASSERT_EQ(basket.total(), 200.0);
}

TEST(ShoppingBasketTest, SingleItemQuantityOne) {
    vector<Item> items = {*new Item(100.0, 1)};
    ShoppingBasket &basket = *new ShoppingBasket(items);
    ASSERT_EQ(basket.total(), 100.0);
}
