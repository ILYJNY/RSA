//
// Created by Backup on 2024-03-23.
//
#include "../input/structures.h"
#include "../input/get_public_key.cpp"



long double decrypt(long double C, private_key privateKey) {
    long double N = privateKey.N;
    long double e = privateKey.e;
    long double M = fmodl(pow(C, e), N);
    return M;

}