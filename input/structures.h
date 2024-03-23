//
// Created by Backup on 2024-03-23.
//

#ifndef RSA_STRUCTURES_H
#define RSA_STRUCTURES_H

struct public_key {
    long double e;
    long double N;
};

struct private_key {
    long double N;
    long double d;
};


struct results {
    long double p;
    long double q;
    long double e;
    long double d;
    long double N;
    long double l;
};

struct total_results {
    public_key publicKey;
    private_key privateKey;
    results result;
};


#endif //RSA_STRUCTURES_H
