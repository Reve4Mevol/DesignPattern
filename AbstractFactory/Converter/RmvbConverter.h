//
// Created by Administrator on 2021-09-27.
//

#ifndef DESIGNPATTERNS_RMVBCONVERTER_H
#define DESIGNPATTERNS_RMVBCONVERTER_H


#include "FileConverter.h"

class RmvbConverter : public FileConverter {
public:
    RmvbConverter() = default;

    virtual ~RmvbConverter() = default;

    void convertFile() override {
        std::cout << "RmvbConverter start converting ..." << std::endl;
    }
};

#endif //DESIGNPATTERNS_RMVBCONVERTER_H
