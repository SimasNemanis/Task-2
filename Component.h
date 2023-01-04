//
// Created by s046791 on 10/28/2022.
//

#ifndef FT2_COMPONENT_H
#define FT2_COMPONENT_H

class Component {
public:
    virtual double Gprice() = 0;
    virtual void material() = 0;
};

#endif //FT2_COMPONENT_H
//material shows the info which you get back component and composite