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
#include <stdio.h>

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

#define STOP '|'

#define COVERAGE 350 //每罐油漆可刷的面积

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
     7.3.1 备选拼写:iso646.h头文件
     7.3.2 优先级
     7.3.3 求值顺序
     7.3.4 范围
     
     7.4 一个统计单词的程序
     
     7.5 条件运算符:?:
     
     7.6 循环辅助: continue和break
     */
    
    /* --Code-- */
    
    // 7.9 使用contiune跳过部分循环
    /*sconst float MIN = 0.0f;
    const float MAX = 100.0f;
    float score;
    float total = 0.0f;
    int n = 0;
    float min = MAX;
    float max = MIN;
    printf("Enter the first score (q to quit): ");
    while (scanf("%f", &score) == 1) {
        if (score < MIN || score > MAX) {
            printf("%0.1f is an invalid value. Try again:", score);
            continue;
        }
        printf("Accepting %0.1f:\n", score);
        // 求最大最小值
        min = (score < min) ? score : min;
        max = (score > max) ? score : max;
        total += score;
        n++;
        printf("Enter nex score (q to quit): ");
    }
    if (n > 0) {
        printf("Average of %d scores is %0.1f.\n", n, total/n);
        printf("Low = %0.1f, high = %0.1f\n", min, max);
    }
    else {
        printf("No valid scores were entered.\n");
    }*/
    
    // 7.8 使用条件运算符
    /*int sq_feet;
    int cans;
    printf("Enter number of square feet to be painted:\n");
    while (scanf("%d", &sq_feet) == 1) {
        cans = sq_feet/COVERAGE;
        cans += ((sq_feet % COVERAGE == 0) ? 0 : 1);
        printf("You need %d %s of paint.\n", cans, cans == 1 ? "can" : "cans");
        printf("Enter next value (q to quit):\n");
    }*/
    
    // 7.7 -- 统计字符数、单词数、行数
    /*char c;
    char prev;
    long n_chars = 0L;// 字符数
    int n_lines = 0;// 行数
    int n_words = 0;// 单词数
    int p_lines = 0;// 不完整的行数
    bool inword = false; // 如果c在单词中，inword等于true
    printf("Enter text to be analyzed(|to terminate):\n");
    prev = '\n';// 用于识别完整的行
    while ((c = getchar()) != STOP) {
        n_chars++;// 统计字符
        if (c == '\n')
            n_lines++; // 统计行
        if (!isspace(c) && !inword) {
            inword = true;// 开始一个新的单词
            n_words++;// 统计单词
        }
        if (isspace(c) && inword)
            inword = false;// 打到单词的末尾
        prev = c;// 保存字符的值
    }
    if (prev != '\n')
        p_lines = 1;
    printf("characters = %ld, words = %d, lines = %d, ", n_chars, n_words, n_lines);
    printf("partial lines = %d \n", p_lines);*/
    
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
