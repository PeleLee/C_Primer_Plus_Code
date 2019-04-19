//
//  main.c
//  Chapter_5
//
//  Created by LiQunFei on 2019/4/19.
//  Copyright © 2019 IlreldI. All rights reserved.
//

#include <stdio.h>

#define ADJUST 7.31
#define SQUARES 64

int main(int argc, const char * argv[]) {
    
    /* 摘要
     5 运算符、表达式和语句
     
     5.1 循环简介
     
     5.2 基本运算符
     5.2.1 赋值运算符：=
     5.2.2 加法运算符：+
     5.2.3 减法运算符：-
     5.2.4 符号运算符：-和+
     5.2.5 乘法运算符：*
     */
    
    // ---code---
    
    // 5.5 --指数增长
    /*const double CROP = 2E16;
    double current, total;
    int count = 1;
    printf("square grains total ");
    printf("fraction of \n");
    printf(" added grains ");
    printf("world total\n");
    total = current = 1.0;
    printf("%4d %13.2e %12.2e %12.2e\n", count, current, total, total/CROP);
    while (count < SQUARES) {
        count = count + 1;
        current = 2.0 * current;
        total = total + current;
        printf("%4d %13.2e %12.2e %12.2e\n", count, current, total, total/CROP);
    }
    printf("That's all.\n");*/
    
    // 5.4 -- 计算1～20的平方
    /*int num = 1;
    while (num < 21) {
        printf("%4d %6d \n", num, num*num);
        num = num + 1;
    }*/
    
    // 5.3 -- 高尔夫锦标赛计分卡
    /*int jane, tarzan, cheeta;
    cheeta = tarzan = jane = 68;
    printf("cheeta tarzan jane\n");
    printf("First round score %4d %8d %8d\n", cheeta, tarzan, jane);*/
    
    // 5.2 -- 计算多个不同鞋码对应的脚长
    /*const double SCALE = 0.333;
    double shoe, foot;
    printf("Shoe size (men's) foot length\n");
    shoe = 3.0;
    while (shoe < 18.5) {
        foot = SCALE * shoe + ADJUST;
        printf("%10.1f %15.2f inches\n",shoe,foot);
        shoe = shoe + 1.0;
    }
    printf("If the shoe fits, weaer it.\n");*/
    
    // 5.1 -- 把鞋码转换成英寸
    /*const double SCALE = 0.333;
    double shoe, foot;
    shoe = 9.0;
    foot = SCALE*shoe+ADJUST;
    printf("Shoe size (men's) foot length\n");
    printf("%10.1f %15.2f inches\n",shoe,foot);*/
    
    return 0;
}
