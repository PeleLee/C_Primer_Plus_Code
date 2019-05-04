//
//  main.c
//  Chapter_9
//
//  Created by LiQunFei on 2019/5/3.
//  Copyright © 2019 IlreldI. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include "hotel.h"

#define NAME "GIGATHINK, INC."
#define ADDRESS "101 Megabuck Plaza"
#define PLACE "Megapolis, CA 94904"
#define WIDTH 40
#define SPACE ' '

void starbar(void);

void show_n_char(char ch, int num);

int imin(int, int);

int imax();

int imax(int, int);

void up_and_down(int);

long fact(int n);

long rfact(int n);

void to_binary(unsigned long n);

void mikado(int);

void interchange(int u, int v);

void interchange_2(int * u, int * v);

int main(int argc, const char * argv[]) {
    // --------------摘要
    /*
     9 函数
     
     9.1 复习函数
     9.1.1 创建并使用简单函数
     9.1.2 分析程序
     9.1.3 函数参数
     9.1.4 定义带形式参数的函数
     9.1.5 声明带形式参数函数的原型
     9.1.6 调用带实际参数的函数
     9.1.7 黑盒视角
     9.1.8 使用return从函数中返回值
     9.1.9 函数类型
     
     9.2 ANSI C函数原型
     9.2.2 问题所在
     9.2.2 ANSI的解决方案
     9.2.3 无参数和未指定参数
     9.2.4 函数原型的优点
     
     9.3 递归
     9.3.1 演示递归
     9.3.2 递归的基本原理
     9.3.3 尾递归
     9.3.4 递归和倒序计算
     9.3.5 递归的优缺点
     
     9.4 编译多源代码文件的程序
     9.4.1 UNIX
     9.4.2 Linux
     9.4.3 DOS命令行编译器
     9.4.4 Windows和苹果的IDE编译器
     9.4.5 使用头文件
     
     9.5 查找地址：&运算符
     
     9.6 更改主调函数中的变量
     
     9.7 指针简介
     9.7.1 间接运算符：*
     9.7.2 声明指针
     9.7.3 使用指针在函数间通信
     
     9.8 关键概念
     */
    
    // --------------Code
    // 9.15
    /*int x = 5, y = 10;
    printf("Originally x = %d and y = %d.\n", x, y);
    interchange_2(&x, &y);
    printf("Now x = %d and y = %d.\n", x, y);*/
    
    // 9.13 9.14
    /*int x = 5, y = 10;
    printf("Originally x = %d and y = %d.\n", x, y);
    interchange(x, y);
    printf("Now x = %d and y = %d.\n", x, y);*/
    
    // 9.12
    /*int pooh = 2, bah = 5;
    printf("In main(), pooh = %d and &pooh = %p\n", pooh, &pooh);
    printf("In main(), bah = %d and &bah = %p\n", bah, &bah);
    mikado(pooh);*/
    
    // 9.9 9.10 9.11 -- 房间费率程序 酒店管理函数
    /*int nights;
    double hotel_rate;
    int code;
    while ((code = menu()) != QUIT) {
        switch (code) {
            case 1:
                hotel_rate = HOTEL1;
                break;
            case 2:
                hotel_rate = HOTEL2;
                break;
            case 3:
                hotel_rate = HOTEL3;
                break;
            case 4:
                hotel_rate = HOTEL4;
                break;
            default:
                hotel_rate = 0.0;
                printf("Oops!\n");
                break;
        }
        nights = getnights();
        showprice(hotel_rate, nights);
    }
    printf("Thank you and goodbye.\n");*/
    
    // 9.8
    /*unsigned long number;
    printf("Enter an integer (q to quit):\n");
    while (scanf("%lu", &number) == 1) {
        printf("Binary equivalent:");
        to_binary(number);
        putchar('\n');
        printf("Enter an integer(q to quit):\n");
    }
    printf("Done.\n");*/
    
    // 9.7
    /*int num;
    printf("This program calculates factorials.\n");
    printf("Enter a value in the range 0-12 (q to quit):\n");
    while (scanf("%d", &num) == 1) {
        if (num < 0) {
            printf("No negative numbers, please.\n");
        }
        else if (num > 12) {
            printf("Keep input under 13.\n");
        }
        else {
            printf("loop: %d factorial = %ld\n", num, fact(num));
            printf("recursion: %d factorial = %ld\n", num, rfact(num));
        }
        printf("Enter a value in the range 0-12 (q to quit):\n");
    }
    printf("Bye.\n");*/
    
    //9.6
    /*up_and_down(1);*/
    
    // 9.4 9.5 -- 错误地使用函数
    /*printf("The maximum of %d and %d is %d.\n", 3, 5, imax(3));
    printf("The maximum of %d and %d is %d.\n", 3, 5, imax(3.0, 5.0));*/
    
    // 9.3
    /*int evil1, evil2;
    printf("Enter a pair of integers (q to quit):\n");
    while (scanf("%d %d", &evil1, &evil2) == 2) {
        printf("The lesser of %d and %d is %d.\n", evil1, evil2, imin(evil1, evil2));
        printf("Enter a pair of integers (q to quit):\n");
    }
    printf("Bye.\n");*/
    
    // 9.2
    /*int spaces;
    show_n_char('*', WIDTH);
    putchar('\n');
    show_n_char(SPACE, 12);
    printf("%s\n", NAME);
    spaces = (WIDTH - strlen(ADDRESS))/2;
    show_n_char(SPACE, spaces);
    printf("%s \n", ADDRESS);
    show_n_char(SPACE, (WIDTH - strlen(PLACE))/2);
    printf("%s\n", PLACE);
    show_n_char('*', WIDTH);
    putchar('\n');*/
    
    // 9.1
    /*starbar();
    printf("%s\n", NAME);
    printf("%s \n", ADDRESS);
    printf("%s\n", PLACE);
    starbar();*/
    
    return 0;
}

void interchange_2(int * u, int * v) {
    int temp;
    temp = *u;
    *u = *v;
    *v = temp;
}

void interchange(int u, int v) {
    int temp;
    printf("Originally u = %d and v = %d.\n", u, v);
    temp = u;
    u = v;
    v = temp;
    printf("Now u = %d and v = %d.\n", u, v);
}

void mikado(int bah) {
    int pooh = 10;
    printf("In mikado(), pooh = %d and & pooh = %p\n", pooh, &pooh);
    printf("In mikado(), bah = %d and &bah = %p\n", bah, &bah);
}

void showprice(double rate, int nights) {
    int n;
    double total = 0.0;
    double factor = 1.0;
    for (n = 1; n <= nights; n++, factor *= DISCOUNT) {
        total += rate*factor;
    }
    printf("The total cost will be $%0.2f.\n", total);
}

int getnights(void) {
    int nights;
    printf("How many nights are needed? ");
    while (scanf("%d", &nights) != 1) {
        scanf("%*s");
        printf("Please enter an integer, such as 2.\n");
    }
    return nights;
}

int menu(void) {
    int code, status;
    printf("\n%s%s \n", STARS, STARS);
    printf("Enter the number of the desired hotel:\n");
    printf("1) Fairfield Arms\n"
           "2) Hotel Olympic\n"
           "3) Chertworthy Plaza\n"
           "4) The Stockton\n"
           "5) quit\n");
    printf("%s%s\n", STARS, STARS);
    while ((status = scanf("%d", &code)) != 1 || (code < 1 || code > 5)) {
        if (status != 1) {
            scanf("%*s");
        }
        printf("Enter an integer from 1 to 5, please.\n");
    }
    return code;
}

void to_binary(unsigned long n) {
    int r;
    r = n%2;
    if (n >= 2) {
        to_binary(n/2);
    }
    putchar(r == 0 ? '0' : '1');
}

long rfact(int n) {
    long ans;
    if (n > 0) {
        ans = n*rfact(n-1);
    }
    else {
        ans = 1;
    }
    return ans;
}

long fact(int n) {
    long ans;
    for (ans = 1; n > 1; n--) {
        ans *= n;
    }
    return ans;
}

void up_and_down(int n) {
    printf("Level %d: n location %p\n", n, &n);
    if (n < 4) {
        up_and_down(n+1);
    }
    printf("LEVEL %d: n location %p\n", n, &n);
}

int imax(n, m)
int n, m;
{
    return (n > m ? n : m);
}

int imin(int n, int m) {
    int min;
    if (n < m) {
        min = n;
    }
    else {
        min = m;
    }
    return min;
}

void show_n_char(char ch, int num) {
    int count;
    for (count = 1; count <= num; count++) {
        putchar(ch);
    }
}

void starbar(void) {
    int count;
    for (count = 1; count <= WIDTH; count++) {
        putchar('*');
    }
    putchar('\n');
}
