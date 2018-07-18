// C Programming
//
// Returns x with the n bits that begin at position p inverted, leaving the others unchanged.
//
//  main.c
//  Exercise_2-7
//
//  Created by Louie Shi on 7/18/18.
//  Copyright © 2018 Louie Shi. All rights reserved.
//

#include <stdio.h>

unsigned invert(unsigned x, int p, int n);

unsigned invert(unsigned x, int p, int n)
{
    return x ^ (~(~0 << n) << (p + 1 -n));
}

int main(int argc, const char * argv[])
{
    printf("%u \n", (unsigned)invert((unsigned)21, 3, 2));
    
    return 0;
}
