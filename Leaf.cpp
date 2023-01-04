//
// Created by s046791 on 10/28/2022.
//

#include "Leaf.h"

#include <utility>

Leaf::Leaf(string name, double price) : name(std::move(name)), price(price) {}

double Leaf::Gprice() {
    return price;
}

void Leaf::material() {
    cout << name << ", " << price << endl;
}