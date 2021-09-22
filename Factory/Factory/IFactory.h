//
// Created by Administrator on 2021-09-22.
//

#ifndef FACTORY_IFACTORY_H
#define FACTORY_IFACTORY_H

#include "../Phone/ISmartPhone.h"

class IFactory {
public:
    IFactory() = default;

    virtual ~IFactory() = default;

    virtual ISmartPhone *createPhone() = 0;
};

#endif //FACTORY_IFACTORY_H
