//
// Created by Administrator on 2021-09-27.
//

#ifndef DESIGNPATTERNS_RMVBFACTORY_H
#define DESIGNPATTERNS_RMVBFACTORY_H

#include "IFactory.h"
#include "../Reader/RmvbReader.h"
#include "../Parser/RmvbParser.h"
#include "../Converter/RmvbConverter.h"

class RmvbFactory : public IFactory {
public:
    RmvbFactory() = default;

    virtual ~RmvbFactory() = default;

    FileReader *createReader() override {
        return new RmvbReader;
    }

    FileParser *createParser() override {
        return new RmvbParser;
    }

    FileConverter *createConverter() override {
        return new RmvbConverter;
    }
};

#endif //DESIGNPATTERNS_RMVBFACTORY_H
