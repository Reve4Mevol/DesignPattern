//
// Created by Administrator on 2021-09-27.
//

#ifndef DESIGNPATTERNS_MP4FACTORY_H
#define DESIGNPATTERNS_MP4FACTORY_H

#include "IFactory.h"
#include "../Reader/Mp4Reader.h"
#include "../Parser/Mp4Parser.h"
#include "../Converter/Mp4Converter.h"

class Mp4Factory : public IFactory {
public:
    Mp4Factory() = default;

    virtual ~Mp4Factory() = default;

    FileReader *createReader() override {
        return new Mp4Reader;
    }

    FileParser *createParser() override {
        return new Mp4Parser;
    }

    FileConverter *createConverter() override {
        return new Mp4Converter;
    }
};

#endif //DESIGNPATTERNS_MP4FACTORY_H
