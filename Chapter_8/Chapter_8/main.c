//
//  main.c
//  Chapter_8
//
//  Created by LiQunFei on 2019/4/29.
//  Copyright © 2019 IlreldI. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

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
     */
    /*--Code--*/
    
    // 8.5 -- 有较大I/O问题的程序
    
    
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
