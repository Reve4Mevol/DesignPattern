//
// Created by Administrator on 2021-09-28.
//

#ifndef DESIGNPATTERNS_SINGLETON_H
#define DESIGNPATTERNS_SINGLETON_H

#include <iostream>
#include <mutex>

class Singleton {
private:
    Singleton() {
        std::cout << "create Singleton" << std::endl;
    }

    Singleton(const Singleton &object) {

    }

public:
    static Singleton *getInstance();

    static Singleton *getInstance_doubleCheck();

    static Singleton *getInstance_final();

    static Singleton *m_instance;
    static std::mutex m_mutex;
    static std::atomic<Singleton *> m_instance_final;
};


#endif //DESIGNPATTERNS_SINGLETON_H
