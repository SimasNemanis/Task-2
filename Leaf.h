//
// Created by s046791 on 10/28/2022.
//

#ifndef FT2_LEAF_H
#define FT2_LEAF_H

#include <iostream>
#include "Component.h"


using namespace std;
class Leaf: public virtual Component {

public:
    Leaf(string name, double price);
    double Gprice() override;
    void material() override;
private:
    string name;
    double price;
};


#endif //FT2_LEAF_H
