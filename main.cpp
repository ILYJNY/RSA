#include <iostream>
#include "input/structures.h"
#include "input/get_public_key.cpp"
#include "things/LCM_GCD.cpp"


int a;

bool flag; // True is encrypt, False is decrypt

int main() {
    total_results mainresult = main_();
    printf("%s", "'1' for Encrypt, '2' for Decrypt");
    scanf("%d", &a);
    if (a == 1)
        flag = true;

    else if (a == 2)
        flag = false;





}
