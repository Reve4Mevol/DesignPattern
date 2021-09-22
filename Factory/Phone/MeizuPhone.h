//
// Created by Administrator on 2021-09-22.
//

#ifndef FACTORY_MEIZUPHONE_H
#define FACTORY_MEIZUPHONE_H

#include "ISmartPhone.h"

class MeizuPhone : public ISmartPhone {
public:
    bool makePhoneCall(const char *phoneNum) override {
        return false;
    }
};

#endif //FACTORY_MEIZUPHONE_H
