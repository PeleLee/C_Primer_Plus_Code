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

#define YEARS 2

#define SIZE_10 10

int sum(int ar[], int n);

int sump(int *start, int *end);

int data[2] = {100, 200};
int moredata[2] = {300, 400};

int main(int argc, const char * argv[]) {
    
    // ----------------------------- 摘要
    /*
     10 数组和指针
     
     10.1 数组
     10.1.1 初始化数组
     10.1.2 指定初始化器
     10.1.3 给数组元素赋值
     10.1.4 数组边界
     10.1.5 指定数组的大小
     
     10.2 多维数组
     10.2.1 初始化二维数组
     10.2.2 其他多维数组
     
     10.3 指针和数组
     
     10.4 函数、数组和指针
     10.4.1 使用指针形参
     */
    
    // ----------------------------- Code
    // 10.12
    /*int *p1, *p2, *p3;
    p1 = p2 = data;
    p3 = moredata;
    printf(" *p1 = %d, *p2 = %d, *p3 = %d\n", *p1, *p2, *p3);
    printf("*p1++ = %d, *++p2 = %d, (*p3)++ = %d\n", *p1++, *++p2, (*p3)++);
    printf(" *p1 = %d, *p2 = %d, *p3 = %d\n", *p1, *p2, *p3);*/
    
    // 10.11
    /*int marbles[SIZE_10] = {20, 10, 5, 39, 4, 16, 19, 26, 31, 20};
    long answer;
    answer = sump(marbles, marbles+SIZE_10);
    printf("The total number of marbles is %ld.\n", answer);*/
    
    // 10.10
    /*int marbles[SIZE_10] = {20, 10, 5, 39, 4, 16, 19, 26, 31, 20};
    long answer;
    answer = sum(marbles, SIZE_10);
    printf("The total number of marbles is %ld.\n", answer);
    printf("The size of marbles is %zd bytes.\n", sizeof(marbles));*/
    
    // 10.9
    /*int days[MONTHS] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int index;
    for (index = 0; index < MONTHS; index++) {
        printf("Month %2d has %d days.\n", index + 1, *(days+index));
    }*/
    
    // 10.8
    /*short dates[SIZE];
    short *pti;
    short index;
    double bills[SIZE];
    double *ptf;
    pti = dates;
    ptf = bills;
    printf("%23s %15s \n", "short", "double");
    for (index = 0; index < SIZE; index++) {
        printf("pointers + %d: %10p %10p\n", index, pti+index, ptf+index);
    }*/
    
    // 10.7
    /*const float rain[YEARS][MONTHS] = {{4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},
                                       {8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3}
    };
    int year, month;
    float subtot, total;
    printf(" YEAR RAINFALL (inches)\n");
    for (year = 0, total = 0; year < YEARS; year++) {
        for (month = 0, subtot = 0; month < MONTHS; month++) {
            subtot += rain[year][month];
        }
        printf("%5d %15.1f\n", 2010 + year, subtot);
        total += subtot;
    }
    printf("\nThe yearly average is %.1f inches.\n\n", total/YEARS);
    printf("MONTHLY AVERAGES:\n\n");
    printf("  Jan Feb Mar Apr May Jun Jul Aug Sep Oct ");
    printf(" Nov Dec\n");
    for (month = 0; month < MONTHS; month++) {
        for (year = 0, subtot = 0; year < YEARS; year++) {
            subtot += rain[year][month];
        }
        printf("%4.1f ", subtot/YEARS);
    }
    printf("\n");*/
    
    // 10.6
    /*int value1 = 44;
    int arr[SIZE];
    int value2 = 88;
    int i;
    printf("value1 = %d, value2 = %d\n", value1, value2);
    for (i = -1; i <= SIZE; i++) {
        arr[i] = 2*i+1;
    }
    for (i = -1; i < 7; i++) {
        printf("%2d %d\n", i, arr[i]);
    }
    printf("value1 = %d, value2 = %d\n", value1, value2);
    printf("address of arr[-1]: %p\n", &arr[-1]);
    printf("address of arr[4]: %p\n", &arr[4]);
    printf("address of value1: %p\n", &value1);
    printf("address of value2: %p\n", &value2);*/
    
    // 10.5
    /*int days[MONTHS] = { 31, 28, [4] = 31, 30, 31, [1] = 29};
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
    }*/
    
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

int sump(int *start, int *end) {
    int total = 0;
    while (start < end) {
        /*total += *start;
        start++;*/
        total += *start++;
    }
    return total;
}

int sum(int ar[], int n) {
    int i;
    int total = 0;
    for (i = 0; i < n; i++) {
        total += ar[i];
    }
    printf("The size of ar is %zd bytes.\n", sizeof(ar));
    return total;
}
