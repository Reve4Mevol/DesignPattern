//
// Created by Administrator on 2021-09-27.
//

#ifndef DESIGNPATTERNS_PLAYER_H
#define DESIGNPATTERNS_PLAYER_H

#include "Factory/IFactory.h"

class Player {
public:
    Player(IFactory *factory) : m_factory(factory) {
        reader = nullptr;
        parser = nullptr;
        converter = nullptr;
    }

    virtual ~Player() {
        if (reader) {
            delete (reader);
        }
        if (parser) {
            delete (parser);
        }
        if (converter) {
            delete (converter);
        }
    }

    void play() {
        reader = m_factory->createReader();
        parser = m_factory->createParser();
        converter = m_factory->createConverter();
        if (reader && parser && converter) {
            reader->readFile();
            parser->parseFile();
            converter->convertFile();
        }
    }

private:
    IFactory *m_factory;
    FileReader *reader;
    FileParser *parser;
    FileConverter *converter;
};

#endif //DESIGNPATTERNS_PLAYER_H
