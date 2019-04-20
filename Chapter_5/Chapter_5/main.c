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
#define SEC_PER_MIN 60
#define MAX 100

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
     5.2.6 除法运算符：/
     5.2.7 运算符优先级
     5.2.8 优先级和求值顺序
     
     5.3 其他运算符
     5.3.1 sizeof运算符和size_t类型
     5.3.2 求模运算符：% 公式：a%b = a - (a/b)*b
     5.3.3 递增运算符：++
     5.3.4 递减运算符：--
     5.3.5 优先级
     5.3.6 不要自作聪明
     
     5.4 表达式和语句
     5.4.1 表达式
     5.4.2 语句
     */
    
    // ---code---
    
    // 5.13 -- 几种常见的语句
    /*int count, sum;
    count = 0;
    sum = 0;
    while (count++ < 20) {
        sum = sum + count;
        printf("sum = %d\n", sum);
    }*/
    
    // 5.12
    /*int count = MAX + 1;
    while (--count > 0) {
        printf("%d bottles of spring water on the wall, "
               "%d bottles of spring water!\n", count, count);
        printf("Take one down and pass it around,\n");
        printf("%d bottles of spring water!\n\n", count - 1);
    }*/
    
    // 5.11 -- 前缀和后缀
    /*int a = 1, b = 1;
    int a_post, pre_b;
    a_post = a++;
    pre_b = ++b;
    printf("a a_post b pre_b \n");
    printf("%1d %5d %5d %5d \n", a, a_post, b, pre_b);*/
    
    // 5.10 -- 递增：前缀和后缀
    /*int ultra = 0, super = 0;
    while (super < 5) {
        super++;
        ++ultra;
        printf("super = %d, ultra = %d \n", super, ultra);
    }*/
    
    // 5.9 -- 把秒数转换成分和秒
    /*int sec, min, left;
    printf("Convert seconds to minutes and seconds!\n");
    printf("Enter the number of seconds (<=0 to quit):\n");
    scanf("%d",&sec);
    while (sec > 0) {
        min = sec/SEC_PER_MIN;
        left = sec%SEC_PER_MIN;
        printf("%d seconds is %d minutes, %d seconds.\n", sec, min, left);
        printf("Enter next value (<=0 to quit):\n");
        scanf("%d", &sec);
    }
    printf("Done!\n");*/
    
    // 5.8 -- 使用sizeof运算符
    /*int n = 0;
    size_t intsize = sizeof(int);
    printf("n = %d, n has %zd bytes; all ints have %zd bytes.\n", n, sizeof n, intsize);*/
    
    // 5.7 优先级测试
    /*int top, score;
    top = score = -(2+5)*6 + (4+3*(2+3));
    printf("top = %d, score = %d \n",top,score);*/
    
    // 5.6 演示除法
    /*printf("integer division: 5/4 is %d \n",5/4);
    printf("integer division: 6/3 is %d \n",6/3);
    printf("integer division: 7/4 is %d \n",7/4);
    printf("floating division: 7./4. is %1.2f \n",7./4.);
    printf("mixed division: 7./4 is %1.2F \n",7./4);*/
    
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
