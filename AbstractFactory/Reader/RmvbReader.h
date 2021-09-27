//
// Created by Administrator on 2021-09-27.
//

#ifndef DESIGNPATTERNS_RMVBREADER_H
#define DESIGNPATTERNS_RMVBREADER_H

#include "FileReader.h"

class RmvbReader : public FileReader {
public:
    RmvbReader() = default;

    virtual ~RmvbReader() = default;

    void readFile() override {
        std::cout << "RmvbReader start reading ..." << std::endl;
    }
};

#endif //DESIGNPATTERNS_RMVBREADER_H
