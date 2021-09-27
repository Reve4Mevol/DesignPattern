//
// Created by Administrator on 2021-09-27.
//

#ifndef DESIGNPATTERNS_IFACTORY_H
#define DESIGNPATTERNS_IFACTORY_H

#include "../Reader/FileReader.h"
#include "../Parser/FileParser.h"
#include "../Converter/FileConverter.h"

class IFactory {
public:
    IFactory() = default;

    virtual ~IFactory() = default;

    virtual FileReader *createReader() = 0;

    virtual FileParser *createParser() = 0;

    virtual FileConverter *createConverter() = 0;
};

#endif //DESIGNPATTERNS_IFACTORY_H
