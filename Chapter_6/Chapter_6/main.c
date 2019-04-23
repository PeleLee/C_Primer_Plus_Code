//
//  main.c
//  Chapter_6
//
//  Created by LiQunFei on 2019/4/21.
//  Copyright © 2019 IlreldI. All rights reserved.
//

#include <stdio.h>
#include <math.h>

#define ROWS 6
#define CHARS 6

int main(int argc, const char * argv[]) {
    
    /*--摘要--
     6 C控制语句：循环
     
     6.1 再探while循环
     6.1.1 程序注释
     6.1.2 C风格读取循环
     
     6.2 while语句
     6.2.1 终止while循环
     6.2.2 何时终止循环
     6.2.3 while:入口条件循环
     6.2.4 语法要点
     
     6.3 用关系运算符和表达式比较大小
     6.3.1 什么是真
     6.3.2 其他真值
     6.3.3 真值的问题
     6.3.4 新的_Bool类型
     6.3.5 优先级和关系运算符
     
     6.4 不确定循环和计数循环
     
     6.5 for循环
     6.5.1 利用for的灵活性
     
     6.6 其他赋值运算符 +=、-=、*=、/=、%=
     
     6.7 逗号运算符
     6.7.1 当Zeno遇到for循环
     
     6.8 出口条件循环： do while
     
     6.9 如何选择循环
     
     6.10 嵌套循环
     6.10.1 程序分析
     6.10.2 嵌套变式
     
     6.11 数组简介
     */
    
    /*--Code--*/
    
    // 6.18 依赖外部循环的嵌套循环
    int row;
    char ch;
    for (row = 0; row < ROWS; row++) {
        for (ch = ('A'+row); ch < ('A' + CHARS); ch++)
            printf("%c", ch);
        printf("\n");
    }
    
    // 6.17 -- 嵌套循环
    /*int row;
    char ch;
    for (row = 0; row < ROWS; row++) {
        for (ch = 'A'; ch < 'A'+CHARS; ch++)
            printf("%c", ch);
        printf("\n");
    }*/
    
    // 6.16
    /*const int secret_code = 13;
    int code_entered;
    printf("To enter the triskaidekaphobia therapy club,\n");
    printf("please enter the secret code number: ");
    scanf("%d", &code_entered);
    while (code_entered != secret_code) {
        printf("To enter the triskaidekaphobia therapy club,\n");
        printf("please enter the secret code number: ");
        scanf("%d", &code_entered);
    }
    printf("Congratulations! You are cured!\n");*/
    
    // 6.15 -- 出口条件循环
    /*const int secret_code = 13;
    int code_entered;
    do {
        printf("To enter the triskaidekaphobia therapy club,\n");
        printf("please enter the secret code number: ");
        scanf("%d", &code_entered);
    } while (code_entered != secret_code);
    printf("Congratulations! You are cured!\n");*/
    
    // 6.14 -- 求序列的和
    /*int t_ct;
    double time, power_of_2;
    int limit;
    printf("Enter the number of term you want: ");
    scanf("%d", &limit);
    for (time = 0, power_of_2 = 1, t_ct = 1; t_ct <= limit; t_ct++, power_of_2 *= 2.0) {
        time += 1.0/power_of_2;
        printf("time = %f when terms = %d.\n", time, t_ct);
    }*/
    
    // 6.13 -- 一类邮资
    /*const int FIRST_OZ = 46;
    const int NEXT_OZ = 20;
    int ounces, cost;
    printf(" ounces cost\n");
    for (ounces = 1, cost = FIRST_OZ; ounces <= 16; ounces++, cost += NEXT_OZ) {
        printf("%5d   $%4.2f\n", ounces, cost/100.0);
    }*/
    
    // for_show
    /*int num = 0;
    for (printf("Keep entering numbers!\n"); num != 6; ) {
        scanf("%d", &num);
    }
    printf("That's the one I want!\n");*/
    
    // for_none
    /*int ans, n;
    ans = 2;
    for (n = 3; ans <= 25; ) {
        printf("n = %d\n", n);
        ans = ans*n;
        printf("n = %d; ans = %d.\n", n, ans);
    }*/
    
    // 6.12 -- 使用for循环创建一个立方表
    /*int num;
    printf("    n   n cubed\n");
    for (num = 1; num <= 6; num++)
        printf("%5d %5d\n", num, num*num*num);*/
    
    // 6.11 -- 使用for循环的计数循环
    /*const int NUMBER = 22;
    int count;
    for (count = 1; count <= NUMBER; count++) {
        printf("Be my Valentine!\n");
    }*/
    
    // 6.10 -- 一个计数循环
    /*const int NUMBER = 22;
    int count = 1;
    while (count <= NUMBER) {
        printf("Be my Valentine!\n");
        count++;
    }*/
    
    // 6.9 -- 使用_Bool类型的变量
    /*long num;
    long sum = 0L;
    _Bool input_is_good;
    printf("Please enter an integer to be summed ");
    printf("(q to quit): ");
    input_is_good = (scanf("%ld", &num) == 1);
    while (input_is_good) {
        sum = sum + num;
        printf("Please enter next integer (q to quit): ");
        input_is_good = (scanf("%ld", &num) == 1);
    }
    printf("Those integers sum to %ld.\n", sum);*/
    
    // 赋值语句的返回值
    /*int x;
    int y = (x = 30);
    printf("y = %d\n", y);*/
    
    // 6.8 -- 误用==会导致无限循环
    /*long num;
    long sum = 0L;
    int status;
    printf("Please enter an integer to be summed");
    printf("(q to quit): ");
    status = scanf("%ld", &num);
    while (status = 1) {
        sum = sum + num;
        printf("Please enter next integer (q to quit): ");
        status = scanf("%ld", &num);
    }
    printf("Those integers sum to %ld.\n", sum);*/
    
    // 6.7 -- 哪些值为真
    /*int n = 3;
    while (n)
        printf("%2d is true\n", n--);
    printf("%2d is false\n", n);
    n = -3;
    while (n)
        printf("%2d is true\n", n++);
    printf("%2d is false\n",n);*/
    
    // 6.6 -- C中的真和假的值
    /*int true_val, false_val;
    true_val = (10>2);
    false_val = (10 == 2);
    printf("true = %d; false = %d \n", true_val, false_val);*/
    
    // 6.5 -- 浮点数比较
    /*const double ANSWER = 3.14159;
    double response;
    printf("What is the value of pi?\n");
    scanf("%lf", &response);
    while (fabs(response - ANSWER) > 0.0001) {
        printf("Try again!\n");
        scanf("%lf", &response);
        printf("Close enough!\n");
    }*/
    
    // 6.4 注意分号的位置
    /*int n = 0;
    while (n++ < 3);
    printf("n is %d\n", n);
    printf("That's all this program does.\n");*/
    
    // 6.3 -- 注意花括号的使用
    /*int n = 0;
    while (n < 3)
        printf("n is %d\n",n); // 无限循环
        n++;
    printf("That's all this program does\n");*/
    
    // 6.2 -- 何时退出循环
    /*int n = 5;
    while (n < 7) {
        printf("n = %d\n", n);
        n++;
        printf("Now n = %d \n", n);
    }
    printf("The loop has finished.\n");*/
    
    // scanf返回值
    /*char x;
    int y;
    printf("输入第一个值:\n");
    int a = scanf("%s", &x);
    printf("输入第二个值:\n");
    int b = scanf("%d", &y);
    printf("a = %d, b = %d \n", a, b);*/
    
    // 6.1 -- 根据用户键入的整数求和
   /* long num;
    long sum = 0L;
    int status;
    printf("Please enter an integer to be summed ");
    printf("(q to quit):" );
    status = scanf("%ld", &num);
    while (status == 1) {
        sum = sum + num;
        printf("Please enter next integer (q to quit):");
        status = scanf("%ld", &num);
    }
    printf("Those integers sum to %ld.\n", sum);*/
    
    return 0;
}
