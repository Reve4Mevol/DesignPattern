//
// Created by Administrator on 2021-09-27.
//

#ifndef DESIGNPATTERNS_FILEREADER_H
#define DESIGNPATTERNS_FILEREADER_H

#include <iostream>

class FileReader {
public:
    FileReader() = default;

    virtual ~FileReader() = default;

    virtual void readFile() = 0;
};

#endif //DESIGNPATTERNS_FILEREADER_H
