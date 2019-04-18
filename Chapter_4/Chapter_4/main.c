//
//  main.c
//  Chapter_4
//
//  Created by LiQunFei on 2019/4/17.
//  Copyright © 2019 IlreldI. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <limits.h> // 整型限制
#include <float.h> //浮点型限制

#define DENSITY 62.4 //人体密度
#define PRAISE "You are an extraordinary being."
#define PI 3.141593
#define PAGES 336
#define WORDS 65618
#define BLURB "Authentic imitation!"

int main(int argc, const char * argv[]) {
    
    /* ----摘要----*/
    /*字符串和格式化输入/输出
     
     4.1 前导程序
     
     4.2 字符串简介
     4.2.1 char类型数组和null字符
     4.2.2 使用字符串
     4.2.3 strlen()函数
     
     4.3 常量和C预处理器
     4.3.1 const限定符
     4.3.2 明示常量
     
     4.4 printf() 和 scanf()
     4.4.1 printf()函数 转换说明
     4.4.2 使用printf()
     4.4.3 printf()的转换说明修饰符
     4.4.4 转换说明的意义
     4.4.5 使用scanf()
     */
    
    /* ----Code----*/
    // 4.15 -- 何时使用&
    int age;
    float assets;
    char pet[30];
    printf("Enter your age, assets, and favorite pet.\n");
    scanf("%d %f",&age,&assets);
    scanf("%s",pet);
    printf("%d $%.2f %s\n",age,assets,pet);
    
    // 4.14
    /*printf("Here's one way to print a ");
    printf("long string.\n");
    printf("Here's another way to print a \
long string.\n");
    printf("Here's the newest way to print a"
           "long string.\n");*/
    
    // 4.13 -- printf()的返回值
    /*int bph2o = 212;
    int rv;
    rv = printf("%d F is water's boiling point.\n",bph2o);
    printf("The printf() function printed %d characters.\n",
           rv);*/
    
    // 4.12 不匹配的浮点型转换
    /*float n1 = 3.0;
    double n2 = 3.0;
    long n3 = 2000000000;
    long n4 = 1234567890;
    printf("%.1e %.1e %.1e %.1e \n",n1,n2,n3,n4);
    printf("%ld %ld \n",n3,n4);
    printf("%ld %ld %ld %ld\n",n1,n2,n3,n4);*/
    
    // 4.11 -- 一些不匹配的整型转换
    /*short num = PAGES;
    short mnum = -PAGES;
    printf("num as short and unsigned short: %hd %hu \n",num,num);
    printf("-num as short and unsigned short: %hd %hu \n",mnum,mnum);
    printf("num as int and char: %d %c\n",num,num);
    printf("WORDS as int, short, and char: %d %hd %c \n",WORDS,WORDS,WORDS);*/
    
    // 4.10 字符串格式
    /*printf("[%2s]\n",BLURB);
    printf("[%24s]\n",BLURB);
    printf("[%24.5s]\n",BLURB);
    printf("[%-24.5s]\n",BLURB);// 左对齐*/
    
    // 4.9 -- 演示一些格式标记
    /*printf("%x %X %#X\n",31,31,31);
    printf("**%d** %d**% d**%  d**% d**\n",42,42,42,42,-42);
    printf("**%5d**%5.3d**%05d**%05.3d**\n",6,6,6,6);*/
    
    // 4.8 -- 一些浮点型修饰符的组合
    /*const double RENT = 3852.99;
    printf("*%f*\n",RENT);
    printf("*%e*\n",RENT);
    printf("*%4.2f*\n",RENT);
    printf("*%3.1f*\n",RENT);
    printf("*%10.3f*\n",RENT);
    printf("*%10.3E*\n",RENT);
    printf("*%+4.2f*\n",RENT);
    printf("*%010.2f*\n",RENT);*/
    
    // 4.7 字段宽度
    /*printf("*%d*\n",PAGES);
    printf("*%2d*\n",PAGES);
    printf("*%10d*\n",PAGES);
    printf("*%-10d*\n",PAGES);*/
    
    // 4.6 -- 使用转换说明
    /*int number = 7;
    float pies = 12.75;
    int cost = 7800;
    
    printf("The %d contestants ate %f berry pies.\n",number,pies);
    
    printf("The value of pi is %f.\n",PI);
    
    printf("Farewell! thou art too dear for my possessing.\n");
    
    printf("%c%d\n",'$',2*cost);*/
    /*7名参赛者吃了12.750000个浆果馅饼。
     pi的值是3.141590。
     再见！ 你对我的拥有太珍贵了。
     $15600*/
    
    // 4.5 -- 使用limit.h和float头文件中定义的明示常量
    /*printf("Some number limits for this system:\n");
     
     printf("Biggest int: %d \n",INT_MAX);
     
     printf("Smallest long long: %lld\n",LLONG_MIN);
     
     printf("One byte = %d bits on this system.\n",CHAR_BIT);
     
     printf("Largest double: %e\n",DBL_MAX);
     
     printf("Smallest normal float: %e\n",FLT_MIN);
     
     printf("float precision = %d digits\n",FLT_DIG);
     
     printf("float epsilon = %e \n",FLT_EPSILON);*/
    
    // 4.4
    /*float area, circum, radius;
     
     printf("What is the radius of your pizza?\n");
     
     scanf("%f",&radius);
     
     area = PI * radius * radius;
     
     circum = 2.0 * PI * radius;
     
     printf("Your basic pizza parameters are as follows:\n");
     
     printf("circumference = %1.2f, area = %1.2f\n",circum,area);*/
    
    // 4.2
    /*char name[40];
     
     printf("What's your name? ");
     
     scanf("%s",name);
     
     printf("Hello, %s.%s\n",name,PRAISE);
     
     printf("Your name of %zd letters occupies %zd memory cells.\n",strlen(name),sizeof(name));
     
     printf("The phrase of praise has %zd letters ",strlen(PRAISE));
     
     printf("and occupies %zd memory cells.\n",sizeof PRAISE);*/
    
    //4.1
    /*loat weight, volume;
     
     int size;
     
     unsigned long letters;
     
     char name[40];
     
     printf("Hi! What's your first name?\n");
     
     scanf("%s",name);
     
     printf("%s, what's your weight in pounds?\n",name);
     
     scanf("%f",&weight);
     
     size = sizeof(name);
     
     letters = strlen(name);
     
     volume = weight/DENSITY;
     
     printf("Well, %s, your volume is %2.2f cubic feet.\n",name,volume);
     
     printf("Also, your first name has %lu letters,\n",letters);
     
     printf("and we have %d bytes to store it.\n",size);*/
    
    return 0;
}
