//
// Created by Backup on 2024-03-23.
//
#include "../input/structures.h"
#include "../input/get_public_key.cpp"



long double encrypt(long double M, public_key publicKey) {
    long double N = publicKey.N;
    long double e = publicKey.e;
    long double C = fmodl(pow(M, e), N);
    return C;
}