//
// Created by Administrator on 2021-09-22.
//

#ifndef FACTORY_ISMARTPHONE_H
#define FACTORY_ISMARTPHONE_H

class ISmartPhone {
public:
    ISmartPhone() = default;

    virtual ~ISmartPhone() = default;

    virtual bool makePhoneCall(const char *phoneNum) = 0;
};

#endif //FACTORY_ISMARTPHONE_H
