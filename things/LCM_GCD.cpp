//
// Created by Backup on 2024-03-23.
//
#include <cmath>



int GCD(long double a, long double b) {
    while (b != 0) {
        long double r = fmodl(a, b);
        a = b;
        b = r;
    }
    return a;
}


int LCM(long double a, long double b) {
    return a * b / GCD(a, b);
}


