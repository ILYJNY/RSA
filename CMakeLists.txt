cmake_minimum_required(VERSION 3.27)
project(RSA)

set(CMAKE_CXX_STANDARD 17)

add_executable(RSA main.cpp
        input/get_public_key.cpp
        things/LCM_GCD.cpp
        input/structures.h
        encrypt_decrypt/encrypt.cpp
        encrypt_decrypt/decrypt.cpp)
