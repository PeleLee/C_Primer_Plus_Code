//
//  main.c
//  Chapter_16
//
//  Created by LiQunFei on 2019/5/24.
//  Copyright © 2019 IlreldI. All rights reserved.
//

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "name_st.h"
#include <assert.h>
#include <limits.h>

#define TWO 2

#define OW "Consistency is the last refuge of the unimagina\
tive.- Oscar Wilde"

#define FOUR TWO*TWO

#define PX printf("X is %d.\n", x)

#define FMT "X is %d.\n"

#define SQUARE(X) X*X

#define PR(X) printf("The result is %d.\n", X)

#define PSQR(x) printf("The square of " #x " is %d.\n", ((x)*(x)));

#define XNAME(n) x##n

#define PRINT_XN(n) printf("x" #n "=%d\n", x##n);

#define PR_5(X,...) printf("Message "#X":"__VA_ARGS__)

#define JUST_CHECKING

#define LIMIT 4

void why_me(void);

#define MYTYPE(X) _Generic((X),\
int: "int",\
float: "float",\
double: "double",\
default: "other"\
)

#define NUM 40

void fillarray(double ar[], int n);

void showarray(const double ar[], int n);

int mycomp(const void *p1, const void *p2);

//_Static_assert(CHAR_BIT == 16, "16-bit char falsely assumed");

int main(int argc, const char * argv[]) {
    // ---------------------- 摘要
    /*
     16 C预处理器和C库
     
     16.1 翻译程序的第一步
     
     16.2 明示常量: #define
     16.2.1 记号
     16.2.2 重定义常量
     
     16.3 在#define中使用参数
     16.3.1 用宏参数创建字符串:#运算符
     16.3.2 预处理器黏合剂: ##运算符
     16.3.3 变参宏:...和__VA_ARGS__
     
     16.4 宏和函数的选择
     
     16.5 文件包含: #include
     16.5.1 头文件示例
     16.5.2 使用头文件
     
     16.6 其他指令
     16.6.1 #undef指令
     16.6.2 从C预处理器角度看已定义
     16.6.3 条件编译
     16.6.4 预定义宏
     16.6.5 #line和#error
     16.6.6 #pragma
     16.6.7 泛型选择(C11)
     
     16.7 内联函数
     
     16.8 _Noreturn函数
     
     16.9 C库
     16.9.1 访问C库
     16.9.2 使用库描述
     
     16.10 数学库
     16.10.1 三角问题
     16.10.2 类型变体
     16.10.3 tgmath.h库
     
     16.11 通用工具库
     16.11.1 exit()和atexit()函数
     16.11.2 qsort()函数
     
     16.12 断言库
     16.12.1 assert的用法
     16.12.2 _Static_assert (C11)
     
     16.13 string.h库中memcpy()和memmove()
     
     16.14 可变参数: stdarg.h
     
     16.15 关键概念
     
     16.16 本章小结
    */
    // ---------------------- Code
    // 16.19
    /*puts("char is 16 bits.");*/
    
    // 16.18
    /*double x, y, z;
    puts("Enter a pair of numbers (0 0 to quit):");
    while (scanf("%lf%lf", &x, &y) == 2 && (x != 0 || y != 0)) {
        z = x*x-y*y;
        assert(z>=0);
        printf("answer is %f\n", sqrt(z));
        puts("Next pair of numbers:");
    }
    puts("Done");*/
    
    // 16.17
    /*double vals[NUM];
    fillarray(vals, NUM);
    puts("Random list:");
    showarray(vals, NUM);
    qsort(vals, NUM, sizeof(double), mycomp);
    puts("\nSorted list:");
    showarray(vals, NUM);*/
    
    // 16.13
    /*int d = 5;
    printf("%s \n", MYTYPE(d));
    printf("%s \n", MYTYPE(2.0*d));
    printf("%s \n", MYTYPE(3L));
    printf("%s \n", MYTYPE(&d));*/
    
    // 16.12
    /*printf("The file is %s.\n", __FILE__);
    printf("The date is %s.\n", __DATE__);
    printf("The time is %s.\n", __TIME__);
    printf("The version is %ld.\n", __STDC_VERSION__);
    printf("This is line %d.\n", __LINE__);
    printf("This function is %s \n", __func__);
    why_me();*/
    
    // 16.9-16.11
    /*int i;
    int total = 0;
    for (i = 1; i <= LIMIT; i++) {
        total += 2*i*i + 1;
#ifdef JUST_CHECKING
        printf("i = %d, running total = %d\n", i, total);
#endif
    }
    printf("Grand total = %d\n", total);*/
    
    // 16.6-16.8
    /*names candidate;
    get_names(&candidate);
    printf("Let's welcome ");
    show_names(&candidate);
    printf(" to this program!\n");*/
    
    // 16.5
    /*double x = 48;
    double y;
    y = sqrt(x);
    PR_5(1, "x = %g\n", x);
    PR_5(2, "x = %.2f, y = %.4f\n", x, y);*/
    
    // 16.4
    /*int XNAME(1) = 14;
    int XNAME(2) = 20;
    int x3 = 30;
    PRINT_XN(1);
    printf("x1 = %d\n", x1);
    PRINT_XN(2);
    printf("x2 = %d\n", x2);
    PRINT_XN(3);
    printf("x3 = %d\n", x3);*/
    
    // 16.3
    /*int y = 5;
    PSQR(y);
    PSQR(2+4);*/
    
    // 16.2
    /*int x = 5;
    int z;
    printf("x = %d\n", x);
    z = SQUARE(x);
    printf("Evaluating SQUARE(x):");
    PR(z);
    z = SQUARE(2);
    printf("Evaluating SQUARE(2):");
    PR(z);
    printf("Evaluating SQUARE(x+2):");
    PR(SQUARE(x+2));
    printf("Evaluating 100/SQUARE(2):");
    PR(100/SQUARE(2));
    printf("x is %d.\n", x);
    printf("Evaluating SQUARE(++x):");
    PR(SQUARE(++x));
    printf("After incrementing, x is %x.\n", x);*/
    
    // 16.1
    /*int x = TWO;
    PX;
    x = FOUR;
    printf(FMT, x);
    printf("%s\n", OW);
    printf("TWO: OW\n");*/
    
    return 0;
}

int mycomp(const void *p1, const void *p2) {
    const double *a1 = (const double*)p1;
    const double *a2 = (const double*)p2;
    if (*a1 < *a2) {
        return -1;
    }
    else if (*a1 == *a2) {
        return 0;
    }
    else {
        return 1;
    }
}

void showarray(const double ar[], int n) {
    int index;
    for (index = 0; index < n; index++) {
        printf("%9.4f", ar[index]);
        if (index%6 == 5) {
            putchar('\n');
        }
    }
    if (index%6 != 0) {
        putchar('\n');
    }
}

void fillarray(double ar[], int n) {
    int index;
    for (index = 0; index < n; index++) {
        ar[index] = (double)rand()/((double)rand()+1);
    }
}

void why_me(void) {
    printf("This function is %s\n", __func__);
    printf("This is line %d.\n", __LINE__);
}
