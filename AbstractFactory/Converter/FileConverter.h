//
// Created by Administrator on 2021-09-27.
//

#ifndef DESIGNPATTERNS_FILECONVERTER_H
#define DESIGNPATTERNS_FILECONVERTER_H


#include <iostream>

class FileConverter {
public:
    FileConverter() = default;

    virtual ~FileConverter() = default;

    virtual void convertFile() = 0;
};


#endif //DESIGNPATTERNS_FILECONVERTER_H
