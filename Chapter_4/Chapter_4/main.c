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
#define PI 3.14159

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
     */
    
    /* ----Code----*/
    
    // 4.5 -- 使用limit.h和float头文件中定义的明示常量
    printf("Some number limits for this system:\n");
    
    printf("Biggest int: %d \n",INT_MAX);
    
    printf("Smallest long long: %lld\n",LLONG_MIN);
    
    printf("One byte = %d bits on this system.\n",CHAR_BIT);
    
    printf("Largest double: %e\n",DBL_MAX);
    
    printf("Smallest normal float: %e\n",FLT_MIN);
    
    printf("float precision = %d digits\n",FLT_DIG);
    
    printf("float epsilon = %e \n",FLT_EPSILON);
    
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
