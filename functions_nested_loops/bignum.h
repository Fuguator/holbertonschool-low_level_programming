// bignum.h
#ifndef BIGNUM_H
#define BIGNUM_H

#include <stdio.h>

typedef unsigned char byte;
#define N 300

typedef struct {
    byte digits[N];
} Bignum;

void printbig(Bignum a);
Bignum initbig(int x);
Bignum addbig(Bignum a, Bignum b);

#endif /* BIGNUM_H */

