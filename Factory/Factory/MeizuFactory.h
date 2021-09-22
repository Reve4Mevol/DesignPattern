//
// Created by Administrator on 2021-09-22.
//

#ifndef FACTORY_MEIZUFACTORY_H
#define FACTORY_MEIZUFACTORY_H

#include "IFactory.h"
#include "../Phone/MeizuPhone.h"

class MeizuFactory : public IFactory {
public:
    ISmartPhone *createPhone() override {
        return new MeizuPhone;
    }
};

#endif //FACTORY_MEIZUFACTORY_H
