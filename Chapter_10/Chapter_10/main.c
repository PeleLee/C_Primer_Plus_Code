//
//  main.c
//  Chapter_10
//
//  Created by LiQunFei on 2019/5/5.
//  Copyright © 2019 IlreldI. All rights reserved.
//

#include <stdio.h>

#define MONTHS 12

#define SIZE 4

int main(int argc, const char * argv[]) {
    
    // ----------------------------- 摘要
    /*
     10 数组和指针
     
     10.1 数组
     10.1.1 初始化数组
     10.1.2 指定初始化器
     */
    
    // ----------------------------- Code
    // 10.5
    int days[MONTHS] = { 31, 28, [4] = 31, 30, 31, [1] = 29};
    int i;
    printf("days:\n");
    for (i = 0; i < MONTHS; i++) {
        printf("%2d %d\n", i+1, days[i]);
    }
    
    int stuff[] = {1, [6] = 23};
    int j;
    printf("stuff:\n");
    for (j = 0; j < sizeof(stuff)/sizeof(stuff[0]); j++) {
        printf("%2d %d\n", j+1, stuff[j]);
    }
    
    int stuff2[] = {1, [6] = 4, 9, 10};
    int z;
    printf("stuff2:\n");
    for (z = 0; z < sizeof(stuff2)/sizeof(stuff2[0]); z++) {
        printf("%2d %d\n", z+1, stuff2[z]);
    }
    
    // 10.4
    /*const int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31};
    int index;
    for (index = 0; index < sizeof(days)/sizeof(days[0]); index++) {
        printf("Month %2d has %d days.\n", index+1, days[index]);
    }*/
    
    // 10.3
    /*int some_data[SIZE] = {1492, 1066};
    int i;
    printf("%2s %14s \n", "i", "some_data[i]");
    for (i = 0; i < SIZE; i++) {
        printf("%2d %14d\n", i, some_data[i]);
    }*/
    
    // 10.2
    /*int no_data[SIZE];
    int i;
    printf("%2s %14s \n", "i", "no_data[i]");
    for (i = 0; i < SIZE; i++) {
        printf("%2d %14d\n", i, no_data[i]);
    }*/
    
    // 10.1
    /*const int days[MONTHS] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int index;
    for (index = 0; index < MONTHS; index++) {
        printf("Month %2d has %2d days.\n", index+1, days[index]);
    }*/
    
    return 0;
}
