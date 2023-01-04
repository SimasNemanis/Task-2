//
// Created by s046791 on 10/28/2022.
//

#include "Composite.h"

#include <utility>

Composite::Composite(string name) : name(std::move(name)) {}

double Composite::Gprice() {
    int all = 0;
    for (Component *c: components) {
        all = all + c->Gprice();
    }


    return all;
}

void Composite::material() {
    cout << "-----------------------------------" << endl;
    cout << name << endl;
    cout << "-----------------------------------" << endl;
for(Component *c: components){
    c->material();
}
}

void Composite::putComponent(Component *component) {
    components.emplace_back(component);
}


