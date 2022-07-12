cmake_minimum_required(VERSION 3.22)
project(POO_Detran)

set(CMAKE_CXX_STANDARD 14)

add_executable(POO_Detran main.cpp automovel.h automovel.cpp carro.h carro.cpp moto.h moto.cpp detran.h detran.cpp)
