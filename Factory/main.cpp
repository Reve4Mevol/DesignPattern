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
    return 0;
}
