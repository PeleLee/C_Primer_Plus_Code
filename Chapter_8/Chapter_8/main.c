//
//  main.c
//  Chapter_8
//
//  Created by LiQunFei on 2019/4/29.
//  Copyright © 2019 IlreldI. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void display(char cr, int lines, int width);

long get_long(void);

bool bad_limits(long begin, long end, long low, long high);

double sum_squares(long a, long b);

char get_choice(void);

char get_first(void);

int get_int(void);

void count(void);

int main(int argc, const char * argv[]) {
    /*--摘要--*/
    /*
     8.字符输入/输出和输入验证
     
     8.1 单字符I/O:getchar()和putchar()
     
     8.2 缓冲区
     
     8.3 结束键盘输入
     8.3.1 文件、流和键盘输入
     8.3.2 文件结尾
     
     8.4 重定向和文件
     8.4.1 UNIX、Linux和DOS重定向
     
     8.5 创建更友好的用户界面
     8.5.1 使用缓冲输入
     8.5.2 混合数值和字符输入
     
     8.6 输入验证
     8.6.1 分析程序
     8.6.2 输入流和数字
     
     8.7 菜单浏览
     8.7.1 任务
     8.7.2 使执行更顺利
     8.7.3 混合字符和数值输入
     
     8.8 关键概念
     
     8.9 本章小结
     */
    /*--Code--*/
    
    // 8.8
    int choice;
    void count(void);
    while ((choice = get_choice()) != 'q') {
        switch (choice) {
            case 'a':
                printf("Buy low, sell high.\n");
                break;
            case 'b':
                putchar('\a');
                break;
            case 'c':
                count();
                break;
            default:
                printf("Program error!\n");
                break;
        }
    }
    printf("Bye.\n");
    
    // 8.7
    /*const long MIN = -10000000L;
    const long MAX = +10000000L;
    long start;
    long stop;
    double answer;
    printf("This program computes the sum of the squares of "
           "integers in a range.\nThe lower bound should not "
           "be less than -10000000 and \nthe upper bound "
           "should not be more than +10000000.\nEnter the "
           "limits (enter 0 for both limits to quit):\n"
           "lower limit: ");
    start = get_long();
    printf("upper limit: ");
    stop = get_long();
    while (start != 0 || stop != 0) {
        if (bad_limits(start, stop, MIN, MAX)) {
            printf("Please try again.\n");
        }
        else {
            answer = sum_squares(start, stop);
            printf("The sum of the squares of the integers ");
            printf("from %ld to %ld is %g\n", start, stop, answer);
        }
        printf("Enter the limits (enter 0 for both "
               "limits to quit):\n");
        printf("lower limit: ");
        start = get_long();
        printf("upper limit: ");
        stop = get_long();
    }
    printf("Done.\n");*/
    
    // 8.6
    /*int ch;
    int rows, cols;
    printf("Enter a character and two integers:\n");
    while ((ch = getchar()) != '\n') {
        if (scanf("%d %d", &rows, &cols) != 2) {
            break;
        }
        display(ch, rows, cols);
        while (getchar() != '\n') {
            continue;
        }
        printf("Enter another character and two integers;\n");
        printf("Enter a newline to quit.\n");
    }
    printf("Bye.\n");*/
    
    // 8.5 -- 有较大I/O问题的程序
    /*int ch;
    int rows, cols;
    printf("Enter a character and two integers:\n");
    while ((ch = getchar()) != '\n') {
        scanf("%d %d", &rows, &cols);
        display(ch, rows, cols);
        printf("Enter another character and two integers;\n");
        printf("Enter a newline to quit.\n");
    }
    printf("Bye.\n");*/
    
    // 8.4.2
    /*int guess = 1;
    char response;
    printf("Pick an integer from 1 to 100. I will try to guess ");
    printf("it.\nRespond with a y if my guess is right and with");
    printf("\nan n if it is wrong.\n");
    printf("Uh...is your number %d?\n", guess);
    while ((response = getchar()) != 'y') {
        if (response == 'n') {
            printf("Well, then is it %d?\n", ++guess);
        }
        else {
            printf("Sorry, I understand only y or n.\n");
        }
        while (getchar() != '\n') {
            continue;
        }
    }
    printf("I knew I could do it!\n");*/
    
    // 8.4.1
    /*int guess = 1;
    printf("Pick an integer from 1 to 100. I will try to guess ");
    printf("it.\nRespond with a y if my guess is right and with");
    printf("\nan n if it is wrong.\n");
    printf("Uh...is your number %d?\n", guess);
    while (getchar() != 'y') {
        printf("Well, then, is it %d\n", ++guess);
        while (getchar() != '\n') {
            continue;
        }
    }
    printf("I knew I could do it!\n");*/
    
    // 8.4 -- 一个拖沓且错误的猜数字程序
    /*int guess = 1;
    printf("Pick an integer from 1 to 100. I will try to guess ");
    printf("it.\nRespond with a y if my guess is right and with");
    printf("\nan n if it is wrong.\n");
    printf("Uh...is your number %d?\n", guess);
    while (getchar() != 'y') {
        printf("Well, then, is it %d\n", ++guess);
    }
    printf("I knew I could do it!\n");*/
    
    // 8.3
    /*int ch;
    FILE *fp;
    char fname[50];
    printf("Enter the name of the file: ");
    scanf("%s", fname);
    fp = fopen(fname, "r");
    if (fp == NULL) {
        printf("Filed to open file. Bye\n");
        exit(1);
    }
    while ((ch = getc(fp)) != EOF) {
        putchar(ch);
    }
    fclose(fp);*/
    
    // 8.2
    /*int ch;
    while ((ch = getchar()) != EOF) {
        putchar(ch);
    }*/
    
    // 8.1
    /*char ch;
    while ((ch = getchar()) != '#') {
        putchar(ch);
    }*/
    
    return 0;
}

int get_int(void) {
    int input;
    char ch;
    while (scanf("%d", &input) != 1) {
        while ((ch = getchar()) != '\n') {
            putchar(ch);
        }
        printf(" is not an integer.\nPlease enter an");
        printf("integer value, such as 25, -178, or 3:");
    }
    return input;
}

char get_first(void) {
    int ch;
    ch = getchar();
    while (getchar() != '\n') {
        continue;
    }
    return ch;
}

char get_choice(void) {
    int ch;
    printf("Enter the letter of your choice:\n");
    printf("a. advice\n"
           "b. bell\n");
    printf("c. count\n"
           "q. quit\n");
    ch = get_first();
    while ((ch < 'a' || ch > 'c') && ch != 'q') {
        printf("Please respond with a, b, c, or q.\n");
        ch = get_first();
    }
    return ch;
}

void count(void) {
    int n, i;
    printf("Count how far? Enter an interger:\n");
    n = get_int();
    for (i = 1; i <= n; i++) {
        printf("%d\n", i);
    }
    while (getchar() != '\n') {
        continue;
    }
}

bool bad_limits(long begin, long end, long low, long high) {
    bool not_good = false;
    if (begin > end) {
        printf("%ld isn't smaller than %ld.\n", begin, end);
        not_good = true;
    }
    if (begin < low || end < low) {
        printf("Values must be %ld or greater.\n", low);
        not_good = true;
    }
    if (begin > high || end > high) {
        printf("Values must be %ld or less.\n", high);
        not_good = true;
    }
    return not_good;
}

double sum_squares(long a, long b) {
    double total = 0;
    long i;
    for (i = a; i <= b; i++) {
        total += (double)i*(double)i;
    }
    return total;
}

long get_long(void) {
    long input;
    char ch;
    while (scanf("%ld", &input) != 1) {
        while ((ch = getchar()) != '\n') {
            putchar(ch);
        }
        printf(" is not an integer.\nPlease enter an ");
        printf("integer value, such as 25, -178, or 3:");
    }
    return input;
}

void display(char cr, int lines, int width) {
    int row, col;
    for (row = 1; row <= lines; row++) {
        for (col = 1; col <= width; col++) {
            putchar(cr);
        }
        putchar('\n');
    }
}
