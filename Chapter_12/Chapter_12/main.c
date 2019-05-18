//
//  main.c
//  Chapter_12
//
//  Created by LiQunFei on 2019/5/16.
//  Copyright © 2019 IlreldI. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "diceroll.h"
#include <string.h>

void trystat(void);

int units = 0;

void critic(void);

void report_count(void);

void accumulate(int k);

int count = 0;

static unsigned long int next = 1;

unsigned int rand0(void);

extern void srand1(unsigned int x);

extern int rand1(void);

int static_store = 30;

const char *pcg = "String Literal";

int main(int argc, const char * argv[]) {
    // -------------------------摘要
    /*
     12 存储类别、链接和内存管理
     
     12.1 存储类别
     12.1.1 作用域
     12.1.2 链接
     12.1.3 存储期
     12.1.4 自动变量
     12.1.5 寄存器变量
     12.1.6 块作用域的静态变量
     12.1.7 外部链接的静态变量
     12.1.8 内部链接的静态变量
     12.1.9 多文件
     12.1.10 存储类别说明符
     12.1.11 存储类别和函数
     12.1.12 存储类别的选择
     
     12.2 随机数函数和静态变量
     
     12.3 掷骰子
     
     12.4 分配内存:malloc()和free()
     12.4.1 free()的重要性
     12.4.2 calloc()函数
     12.4.3 动态内存分配和变长数组
     12.4.4 存储类别和动态内存分配
     
     12.5 ANSI C类型限定符
     12.5.1 const类型限定符
     12.5.2 volatile类型限定符
     12.5.3 restrict类型限定符
     12.5.4 _Atomic类型限定符(C11)
     12.5.5 旧关键字的新位置
     
     12.6 关键概念
     
     12.7 本章小结
     */
    // -------------------------Code
    // 12.15
    /*int auto_store = 40;
    char auto_string[] = "Auto char Array";
    int *pi;
    char *pcl;
    pi = (int *)malloc(sizeof(int));
    *pi = 35;
    pcl = (char *)malloc(strlen("Dynamic String")+1);
    strcpy(pcl, "Dynamic String");
    printf("static_store: %d at %p\n", static_store, &static_store);
    printf("    auto_store: %d at %p\n", auto_store, &auto_store);
    printf("    *pi:%d at %p\n", *pi, pi);
    printf("    %s at %p\n", pcg, pcg);
    printf("    %s at %p\n", auto_string, auto_string);
    printf("    %s at %p\n", pcl, pcl);
    printf("    %s at %p\n", "Quoted String", "Quoted String");
    free(pi);
    free(pcl);*/
    
    // 12.14
    /*double *ptd;
    int max;
    int number;
    int i = 0;
    puts("What is the maximum number of type double entries?");
    if (scanf("%d", &max) != 1) {
        puts("Number not correctly entered -- bye.");
        exit(EXIT_FAILURE);
    }
    ptd = (double *)malloc(max*sizeof(double));
    if (ptd == NULL) {
        puts("Memory alloction failed. Goodbye.");
        exit(EXIT_FAILURE);
    }
    puts("Enter the values (q to quit):");
    while (i < max && (scanf("%lf", &ptd[i]) == 1)) {
        ++i;
    }
    printf("Here are your %d entries:\n", number = i);
    for (i = 0; i < number; i++) {
        printf("%7.2f ", ptd[i]);
        if (i%7 == 6) {
            putchar('\n');
        }
    }
    if (i%7 != 0) {
        putchar('\n');
    }
    puts("Done.");
    free(ptd);*/
    
    // 12.13
    /*int dice, roll;
    int sides;
    int status;
    srand((unsigned int)time(0));
    printf("Enter the number of sides per die, 0 to stop.\n");
    while (scanf("%d", &sides) == 1 && sides > 0) {
        printf("How many dice?\n");
        if ((status = scanf("%d", &dice)) != 1) {
            if (status == EOF) {
                break;
            }
            else {
                printf("You should have entered an integer.");
                printf(" Let's begin again.\n");
                while (getchar() != '\n') {
                    continue;
                }
                printf("How many sides? Enter 0 to stop.\n");
                continue;
            }
        }
        roll = roll_n_dice(dice, sides);
        printf("You have rolled a %d using %d %d-sided dice.\n", roll, dice, sides);
        printf("How many sides? Enter 0 to stop.\n");
    }
    printf("The rollem() function was called %d times.\n", roll_count);
    printf("GOOD FORTUNE TO YOU!\n");*/
    
    
    // 12.10
    /*int count;
    unsigned seed;
    printf("Please enter your choice for seed.\n");
    while (scanf("%u", &seed) == 1) {
        srand1(seed);
        for (count = 0; count < 5; count++) {
            printf("%d\n", rand1());
        }
        printf("Please enter next seed (q to quit):\n");
    }
    printf("Done\n");*/
    
    // 12.7 12.8
    /*for (int i = 0; i < 10; i++) {
        printf("random number:%d\n", rand0());
    }*/
    
    // 12.5
    /*int value;
    register int i;
    printf("Enter a positive integer (0 to quit): ");
    while (scanf("%d", &value) == 1 && value > 0) {
        ++count;
        for (i = value; i >= 0; i--) {
            accumulate(i);
        }
        printf("Enter a positive integer (0 to quit): ");
    }
    report_count();*/
    
    // 12.4
    /*extern int units;
    printf("How many pounds to a firkin of butter?\n");
    scanf("%d", &units);
    while (units != 56) {
        critic();
    }
    printf("You must have looked it up!\n");*/
    
    // 12.3
    /*int count;
    for (count = 1; count <= 3; count++) {
        printf("Here comes iteration %d:\n", count);
        trystat();
    }*/
    
    // 12.2
    /*int n = 8;
    printf("    Initially, n = %d at %p\n", n, &n);
    for (int n = 1; n < 3; n++) {
        printf("    loop 1: n = %d at %p\n", n, &n);
    }
    printf("After loop1, n = %d at %p\n", n, &n);
    for (int n = 1; n < 3; n++) {
        printf("    loop2 index n = %d at %p\n", n, &n);
        int n = 6;
        printf("    loop2 : n = %d at %p\n", n, &n);
        n++;
    }
    printf("After loop2 , n = %d at %p\n", n, &n);*/
    
    // 12.1
    /*int x = 30;
    printf("x in outer block: %d at %p\n", x, &x);
    {
        int x = 77;
        printf("x in inner block: %d at %p\n", x, &x);
    }
    printf("x in outer block: %d at %p\n", x, &x);
    while (x++ < 33) {
        int x = 100;
        x++;
        printf("x in while loop: %d at %p\n", x, &x);
    }
    printf("x in outer block: %d at %p\n", x, &x);*/
    
    return 0;
}

unsigned int rand0(void) {
    next = next*1103515245 + 12345;
    return (unsigned int)(next/65536)%32768;
}

void report_count(void) {
    printf("Loop executed %d times \n", count);
}

void critic(void) {
    printf("No luck, my friend. Try again.\n");
    scanf("%d", &units);
}

void trystat(void) {
    int fade = 1;
    static int stay = 1;
    printf("fade = %d and stay = %d\n", fade++, stay++);
}
