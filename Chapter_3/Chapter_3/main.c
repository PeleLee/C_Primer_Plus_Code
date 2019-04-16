//
//  main.c
//  Chapter_3
//
//  Created by LiQunFei on 2019/4/14.
//  Copyright © 2019 IlreldI. All rights reserved.
//

#include <stdio.h>
#include <inttypes.h>

int main(int argc, const char * argv[]) {
    /*------摘要-----*/
    /*
     
     3.3 位->字节->字
     3.4标题:C语言基本数据类型
     
     一般而言，int要占用一个机器字长
     
     3.4_6 显示八进制和十六进制
     
     3.4.2 其他整数类型
     3.4.2_1 声明其他整数类型
     3.4.2_2 使用多种整数类型的原因
     3.4.2_3 long常量和long long常量
     3.4.2_4 打印short、long、long long和unsigned类型
     
     3.4.3 使用字符:char类型
     3.4.3_1 声明char类型变量
     3.4.3_2 字符常量和初始化
     3.4.3_3 非打印字符
     3.4.3_4 打印字符
     3.4.3_5 有符号还是无符号
     
     3.4.4 _Bool类型
     
     3.4.5 可移植类型: stdint.h 和 inttypes.h
     
     3.4.6 float、double 和 long double
     3.4.6_4 浮点值的上溢和下溢
     
     3.4.7 复数和虚数类型
     
     3.4.8 其他类型
     
     3.5 使用数据类型
     
     3.6 参数和陷阱
     
     3.7 转义序列示例
     3.7.1 程序运行情况
     3.7.2 刷新输出
     
     3.8 关键概念
     
     3.9 本章小结
     */
    
    /*------Code-----*/
    
    // 3.10 使用转义序列
    float salary;
    printf("\aEnter your desired monthly salary:");/*1*/
    printf(" $_________\b\b\b\b\b\b\b");/*2*/
    scanf("%f",&salary);
    printf("\n\t$%.2f a month is $%.2f a year.",salary,salary*12.0);/*3*/
    printf("\rGee!\n");/*4*/
    
    // 3.9 --参数错误的情况
    /*int n = 4;
    int m = 5;
    float f = 7.0f;
    float g = 8.0f;
    printf("%d\n",n,m);
    printf("%d %d %d\n",n);
    printf("%d %d\n",f,g);*/
    
    // 3.8 打印类型大小
    /*printf("Type int has a size of %zd bytes.\n",sizeof(int));
    printf("Type char has a size of %zd bytes.\n",sizeof(char));
    printf("Type long has a size of %zd bytes.\n",sizeof(long));
    printf("Type long long has a size of %zd bytes.\n",sizeof(long long));
    printf("Type double has a size of %zd bytes.\n",sizeof(double));
    printf("Type long double has a size of %zd bytes.\n",sizeof(long double));*/
    
    /*floaterr.c--演示舍入错误*/
    /*float a,b;
    b = 2.0e20 + 1.0;
    a = b - 2.0e20;
    printf("%f \n",a);*/
    
    // 3.7 -- 以两种方式显示float类型的值
    /*float aboat = 32000.0;
    double abet = 2.14e9;
    long double dip = 5.32e-5;
    printf("%f can be written %e\n",aboat,aboat);
    printf("An it's %a in hexadecimal, powers of 2 notation\n",aboat);
    printf("%f can be written %e\n",abet,abet);
    printf("%Lf can be written %Le\n",dip,dip);*/
    
    // 3.6 -- 可移植整数类型名
    /*int32_t me32;
     me32 = 45933945;
     printf("First, assume int32_t is int: ");
     printf("Next, let's not make any assumptions.\n");
     printf("Instead, use a \"macro\" form inttypes.h: ");
     printf("me32 = %"PRId32"\n",me32);*/
    
    // 3.5
    /*char ch;
     printf("Please enter a character.\n");
     scanf("%c",&ch);
     printf("The code for %c is %d.\n",ch,ch);*/
    
    // 3.4
    /*unsigned int un = 3000000000;
     short end = 200;
     long big = 65537;
     long long verybig = 12345678908642;
     printf("un = %u and not %d\n",un,un);
     printf("end = %hd and %d\n",end,end);
     printf("big = %ld and not %hd\n",big,big);
     printf("verybig = %lld and not %ld\n",verybig,verybig);*/
    
    // toobig
    /*int i = 2147483647;
     unsigned int j = 4294967295;
     printf("%d %d %d\n",i,i+1,i+2);
     printf("%u %u %u\n",j,j+1,j+2);*/
    
    // 3.3
    /*int x = 100;
     printf("dec = %d; octal = %o; hex = %x\n",x,x,x);
     printf("dec = %d; octal = %#o; hex = %#x\n",x,x,x);*/
    
    // 3.2
    /*int ten = 10;
     int two = 2;
     printf("Doing it right: ");
     printf("%d minus %d is %d\n",ten,2,ten - two);
     printf("Doing it wrong: ");
     printf("%d minus %d is %d\n",ten);*/
    
    // 3.1
    /*float weight;
     float value;
     
     printf("Are you worth your weight in platiunm(和你体重相同的铂金价值几何)?\n");
     printf("Let's check it out.(让我们来看看)\n");
     printf("Please enter your weight in pounds(输入你的英镑体重): ");
     
     scanf("%f",&weight);
     
     value = 1700.0 * weight * 14.5833;
     
     printf("You weight in platinum is worth $%.2f.\n",value);
     printf("You are easily worth that! If platinum prices drop,\n");
     printf("eat more to maintain your value.\n");*/
    
    return 0;
}
