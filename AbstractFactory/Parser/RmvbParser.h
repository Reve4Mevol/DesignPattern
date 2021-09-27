//
// Created by Administrator on 2021-09-27.
//

#ifndef DESIGNPATTERNS_RMVBPARSER_H
#define DESIGNPATTERNS_RMVBPARSER_H

#include "FileParser.h"

class RmvbParser : public FileParser {
public:
    RmvbParser() = default;

    virtual ~RmvbParser() = default;

    void parseFile() override {
        std::cout << "RmvbParser start parsing ..." << std::endl;
    }
};

#endif //DESIGNPATTERNS_RMVBPARSER_H
