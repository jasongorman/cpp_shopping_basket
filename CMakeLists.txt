cmake_minimum_required(VERSION 3.16)
project(shopping_basket)

set(CMAKE_CXX_STANDARD 14)

add_executable(shopping_basket main.cpp ShoppingBasket.cpp ShoppingBasket.h Item.cpp Item.h)