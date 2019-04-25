//
//  main.m
//  Chapter_7
//
//  Created by LiQunFei on 2019/4/24.
//  Copyright © 2019 IlreldI. All rights reserved.
//

#import <Foundation/Foundation.h>
#include <ctype.h>
#include <stdbool.h>

#define SPACE ' '
#define RATE1 0.13230
#define RATE2 0.15040
#define RATE3 0.30025
#define RATE4 0.34025
#define BREAK1 360.0
#define BREAK2 468.0
#define BREAK3 720.0
#define BASE1 (RATE1*BREAK1)
#define BASE2 (BASE1+(RATE2*(BREAK2-BREAK1)))
#define BASE3 (BASE1+BASE2+(BREAK3*(BREAK3-BREAK2)))

#define PERIOD '.'

int main(int argc, const char * argv[]) {
    
    /* --摘要-- */
    /*
     7 C控制语句：分支和跳转
     
     7.1 if语句
     
     7.2 if else 语句
     7.2.1 getchar()和putchar()
     7.2.2 ctype.h系列的字符函数
     7.2.3 多重选择else if
     7.2.4 else与if配对
     7.2.5 多层嵌套的if语句
     
     7.3 逻辑运算符
     */
    
    /* --Code-- */
    
    // 7.6 -- 使用逻辑与运算符
    /*char ch;
    int charcount = 0;
    while ((ch = getchar()) != PERIOD) {
        if (ch != '"' && ch != '\'') {
            charcount++;
        }
    }
    printf("There are %d nonquote characters. \n", charcount);*/
    
    // 7.5 -- 使用嵌套if语句显示一个数的约数
    /*unsigned long num;
    unsigned long div;
    bool isPrime;
    printf("Please enter an integer for analysis; ");
    printf("Enter q to quit.\n");
    while (scanf("%lu", &num) == 1) {
        for (div = 2, isPrime = true; (div*div) <= num; div++) {
            if (num % div == 0) {
                if (div*div != num) {
                    printf("%lu is divisible by %lu and %lu.\n", num, div, num/div);
                }
                else {
                    printf("%lu is divisible by %lu.\n", num, div);
                }
                isPrime = false;
            }
        }
        if (isPrime) {
            printf("%lu is prime. \n", num);
        }
        printf("Please enter another integer for analysis;");
        printf("Enter q to quit.\n");
    }
    printf("Bye.\n");*/
    
    // 7.4 -- 计算电费
    /*double kwh;
    double bill;
    printf("Please enter the kwh used.\n");
    scanf("%lf", &kwh);
    if (kwh <= BREAK1) {
        bill = RATE1*kwh;
    }
    else if (kwh <= BREAK2) {
        bill = BASE1+(RATE2*(kwh-BREAK1));
    }
    else if (kwh <= BREAK3) {
        bill = BASE2 + (RATE3 * (kwh - BREAK2));
    }
    else {
        bill = BASE3 + (RATE4 * (kwh-BREAK3));
    }
    printf("The charge for %.1f kwh is $ %1.2f.\n", kwh, bill);*/
    
    // 7.3 -- 替换输入的字母，非字母字符保持不变
    /*char ch;
    while ((ch = getchar()) != '\n') {
        if (isalpha(ch)) {
            putchar(ch+1);
        }
        else {
            putchar(ch);
        }
    }
    putchar(ch);*/
    
    // 7.2  更改输入，空格不变 , 没看懂，为何不是没输入一个字符就打印出来
    /*char ch;
    ch = getchar();
    while (ch != '\n') {
        if (ch == SPACE)
            putchar(ch);
        else
            putchar(ch+1);
        ch = getchar();
    }*/
    
    // 7.1
    /*const int FREEZING = 0;
    float temperature;
    int cold_days = 0;
    int all_days = 0;
    printf("Enter the list of daily low temperatures.\n");
    printf("Use Celsius, and enter q to quit.\n");
    while (scanf("%f", &temperature) == 1) {
        all_days++;
        if (temperature < FREEZING) {
            cold_days++;
        }
    }
    if (all_days != 0) {
        printf("%d days total: %.1f %% were below freezing.\n", all_days, 100.0*(float)cold_days/all_days);
    }
    if (all_days == 0) {
        printf("No data entered!");
    }*/
    
    return 0;
}
