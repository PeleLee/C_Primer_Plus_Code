//
//  s_and_r.c
//  Chapter_12
//
//  Created by LiQunFei on 2019/5/17.
//  Copyright © 2019 IlreldI. All rights reserved.
//

#include <stdio.h>

static unsigned long int next = 1;

int rand1(void) {
    next = next*1103515245+12345;
    return (unsigned int)(next/65536)%32768;
}

void srand1(unsigned int seed) {
    next = seed;
}
