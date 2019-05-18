//
//  diceroll.c
//  Chapter_12
//
//  Created by LiQunFei on 2019/5/17.
//  Copyright © 2019 IlreldI. All rights reserved.
//

#include "diceroll.h"
#include "diceroll.h"
#include <stdlib.h>
#include <stdio.h>

int roll_count = 0;

static int rollem(int sides) {
    int roll;
    roll = rand()%sides+1;
    ++roll_count;
    return roll;
}

int roll_n_dice(int dice, int sides) {
    int d;
    int total = 0;
    if (sides < 2) {
        printf("Need at least 2 sides.\n");
        return -2;
    }
    if (dice < 1) {
        printf("Need at least 1 die.\n");
        return -1;
    }
    for (d = 0; d < dice; d++) {
        total += rollem(sides);
    }
    return total;
}
