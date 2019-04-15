//
//  main.c
//  Chapter_3
//
//  Created by LiQunFei on 2019/4/14.
//  Copyright © 2019 IlreldI. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    /*------摘要-----*/
    /*
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
    */
    
    
    // 3.3 位->字节->字
    
    /*------Code-----*/
    
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
