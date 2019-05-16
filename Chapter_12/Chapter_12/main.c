//
//  main.c
//  Chapter_12
//
//  Created by LiQunFei on 2019/5/16.
//  Copyright © 2019 IlreldI. All rights reserved.
//

#include <stdio.h>

void trystat(void);

int units = 0;

void critic(void);

void report_count(void);

void accumulate(int k);

int count = 0;

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
     */
    // -------------------------Code
    // 12.5
    int value;
    register int i;
    printf("Enter a positive integer (0 to quit): ");
    while (scanf("%d", &value) == 1 && value > 0) {
        ++count;
        for (i = value; i >= 0; i--) {
            accumulate(i);
        }
        printf("Enter a positive integer (0 to quit): ");
    }
    report_count();
    
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
