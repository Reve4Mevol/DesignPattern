//
// Created by Administrator on 2021-09-28.
//

#include <iostream>
#include "Singleton.h"

int main() {
    Singleton *obj1 = Singleton::getInstance();
    Singleton *obj2 = Singleton::getInstance();
    Singleton *obj3 = Singleton::getInstance();
    if (obj1 == obj2 && obj2 == obj3 && obj1) {
        std::cout << "Singleton!" << std::endl;
    }
    return 0;
}