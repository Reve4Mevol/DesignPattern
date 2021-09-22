//
// Created by Administrator on 2021-09-22.
//

#ifndef FACTORY_HONERFACTORY_H
#define FACTORY_HONERFACTORY_H

#include "IFactory.h"
#include "../Phone/HonerPhone.h"

class HonerFactory : public IFactory {
public:
    ISmartPhone *createPhone() override {
        return new HonerPhone;
    }
};

#endif //FACTORY_HONERFACTORY_H
