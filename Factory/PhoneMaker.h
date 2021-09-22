//
// Created by Administrator on 2021-09-22.
//

#ifndef FACTORY_PHONEMAKER_H
#define FACTORY_PHONEMAKER_H

#include <vector>
#include "Factory/IFactory.h"

class PhoneMaker {
public:
    PhoneMaker(IFactory *factory) : m_factory(factory) {

    }

    ~PhoneMaker() = default;

    std::vector<ISmartPhone *> createPhone(const int &num) {
        std::vector<ISmartPhone *> ret;
        for (int i = 0; i < num; ++i) {
            ret.push_back(m_factory->createPhone());
        }
        return ret;
    }

private:
    IFactory *m_factory;
};

#endif //FACTORY_PHONEMAKER_H
