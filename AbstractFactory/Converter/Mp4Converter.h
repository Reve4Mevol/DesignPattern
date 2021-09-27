//
// Created by Administrator on 2021-09-27.
//

#ifndef DESIGNPATTERNS_MP4CONVERTER_H
#define DESIGNPATTERNS_MP4CONVERTER_H


#include "FileConverter.h"

class Mp4Converter : public FileConverter {
public:
    Mp4Converter() = default;

    virtual ~Mp4Converter() = default;

    void convertFile() override {
        std::cout << "Mp4Converter start converting ..." << std::endl;
    }
};

#endif //DESIGNPATTERNS_MP4CONVERTER_H
