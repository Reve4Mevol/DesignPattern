cmake_minimum_required(VERSION 3.20)
project(Factory)

set(CMAKE_CXX_STANDARD 14)

add_executable(Factory main.cpp Phone/ISmartPhone.h Phone/MeizuPhone.h Phone/HonerPhone.h Factory/IFactory.h Factory/MeizuFactory.h Factory/HonerFactory.h PhoneMaker.h)
