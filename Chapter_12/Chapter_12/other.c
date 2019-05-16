//
//  other.c
//  Chapter_12
//
//  Created by LiQunFei on 2019/5/16.
//  Copyright © 2019 IlreldI. All rights reserved.
//

#include "other.h"
#include <stdio.h>
// 12.6
extern int count;

static int total = 0;

void accumulate(int k);

void accumulate(int k) {
    static int subtotal = 0;
    if (k <= 0) {
        printf("loop cycle: %d\n", count);
        printf("subtotal: %d; total: %d\n", subtotal, total);
        subtotal = 0;
    }
    else {
        subtotal += k;
        total += k;
    }
}
