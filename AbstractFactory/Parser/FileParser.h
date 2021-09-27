//
// Created by Administrator on 2021-09-27.
//

#ifndef DESIGNPATTERNS_FILEPARSER_H
#define DESIGNPATTERNS_FILEPARSER_H

#include <iostream>

class FileParser {
public:
    FileParser() = default;

    virtual ~FileParser() = default;

    virtual void parseFile() = 0;
};

#endif //DESIGNPATTERNS_FILEPARSER_H
