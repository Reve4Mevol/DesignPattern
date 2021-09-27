/**
 * 程序仅展示思路，可能存在内存泄漏，代码风格等问题
 */

#include <iostream>
#include "PhoneMaker.h"
#include "Factory/MeizuFactory.h"
#include "Factory/HonerFactory.h"

int main() {
    MeizuFactory *pMeizu = new MeizuFactory;
    HonerFactory *pHoner = new HonerFactory;
    PhoneMaker meizuMaker(pMeizu),honerMaker(pHoner);
    std::vector<ISmartPhone *> meizuVec(std::move(meizuMaker.createPhone(100)));
    std::vector<ISmartPhone *> honerVec(std::move(honerMaker.createPhone(90)));
    std::cout << "Meizu has " << meizuVec.size() << " units in stock" << std::endl;
    std::cout << "Honer has " << honerVec.size() << " units in stock" << std::endl;
    for (int i = 0; i < meizuVec.size(); ++i) {
        if(meizuVec.at(i))
        {
            delete(meizuVec.at(i));
            meizuVec.at(i) = nullptr;
        }
    }
    for (int i = 0; i < honerVec.size(); ++i) {
        if(honerVec.at(i))
        {
            delete(honerVec.at(i));
            honerVec.at(i) = nullptr;
        }
    }
    delete(pMeizu);
    delete(pHoner);
    return 0;
}
