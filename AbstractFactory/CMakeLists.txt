cmake_minimum_required(VERSION 3.20)
project(AbstractFactory)

set(CMAKE_CXX_STANDARD 14)

add_executable(AbstractFactory main.cpp Reader/FileReader.h Reader/Mp4Reader.h Reader/RmvbReader.h Parser/FileParser.h Parser/Mp4Parser.h Parser/RmvbParser.h Converter/FileConverter.h Converter/Mp4Converter.h Converter/RmvbConverter.h Factory/IFactory.h Factory/Mp4Factory.h Factory/RmvbFactory.h Player.h)