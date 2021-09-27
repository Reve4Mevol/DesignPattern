//
// Created by Administrator on 2021-09-27.
//

#ifndef DESIGNPATTERNS_MP4READER_H
#define DESIGNPATTERNS_MP4READER_H

#include "FileReader.h"

class Mp4Reader : public FileReader {
public:
    Mp4Reader() = default;

    virtual ~Mp4Reader() = default;

    void readFile() override {
        std::cout << "Mp4Reader start reading ..." << std::endl;
    }
};

#endif //DESIGNPATTERNS_MP4READER_H
