//
// Created by Administrator on 2021-09-27.
//

#ifndef DESIGNPATTERNS_MP4PARSER_H
#define DESIGNPATTERNS_MP4PARSER_H

#include "FileParser.h"

class Mp4Parser : public FileParser {
public:
    Mp4Parser() = default;

    virtual ~Mp4Parser() = default;

    void parseFile() override {
        std::cout << "Mp4Parser start parsing ..." << std::endl;
    }
};

#endif //DESIGNPATTERNS_MP4PARSER_H
