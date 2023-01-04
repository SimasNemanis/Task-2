//
// Created by s046791 on 10/28/2022.
//

#ifndef FT2_COMPOSITE_H
#define FT2_COMPOSITE_H

#include "Component.h"
#include <iostream>
#include <vector>

using namespace std;

class Composite : public virtual Component {
public:
    explicit Composite(string name);
    double Gprice() override;
    void material() override;
    void putComponent(Component *component);
private:
    string name;
    vector<Component*> components;
};


#endif //FT2_COMPOSITE_H
