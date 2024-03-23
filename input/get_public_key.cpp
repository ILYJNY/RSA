//
// Created by Backup on 2024-03-23.
//
#include <cstring>
#include "cstdio"
#include "../things/LCM_GCD.cpp"
#include "random"
#include <cmath>
#include "structures.h"


void Insert(char* lists, int idx, char ch) {memmove(lists+idx+1,lists+idx,strlen(lists)-idx+1);lists[idx]=ch; }
void Delete(char* lists, int idx) {memmove(lists+idx,lists+idx+1,strlen(lists)-idx); }
void Append(char* lists, char ch) {Insert(lists, (int) strlen(lists),ch); }



char* e_lists;
char* d_lists;
long double p;
long double q;
long double e = 1;
long double d = 1;
long double N;
long double l;

using namespace std;





int random(int a, int b) {
    default_random_engine generator;
    uniform_int_distribution<int> distribution(a, b);
    return distribution(generator);
}



void get_things() {
    printf("%s", "p: ");
    scanf("%Lf", &p);
    printf("%s", "q: ");
    scanf("%Lf", &q);
}



void find_e() {
    while (e < l) { // e 찾는중
        e++;
        if (GCD(e, l) == 1)
            Append(e_lists, (char) e);

    }
    e = (long double) (unsigned char) e_lists[random(0, sizeof(e_lists) - 1)];
}


void find_d() {
    while (d<l) { // d 찾는중
        d++;
        if (fmodl(e * d, l) == 1)
            Append(d_lists, char(d));
    }
    d = (long double) (unsigned char) d_lists[random(0, sizeof(d_lists - 1))];
}

total_results main_() {
    get_things();
    N = p * q;
    l = LCM((p - 1), (q - 1));
    find_e();
    find_d();
    public_key publicKey = {e, N};
    private_key privateKey = {N, d};
    results result = {p, q, e, d, N, l};

    return {publicKey, privateKey, result};



}