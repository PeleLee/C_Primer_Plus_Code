//
//  main.c
//  Chapter_15
//
//  Created by LiQunFei on 2019/5/23.
//  Copyright © 2019 IlreldI. All rights reserved.
//

#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

char *itobs(int, char *);
void show_bstr(const char *);
int invert_end(int num, int bits);

#define SOLID 0
#define DOTTED 1
#define DASHED 2

#define BLUE 4
#define GREEN 2
#define RED 1

#define BLACK 0
#define YELLOW (RED|GREEN)
#define MAGENTA (RED|BLUE)
#define CYAN (GREEN|BLUE)
#define WHITE (RED|GREEN|BLUE)

const char *colors[8] = {"black","red","green","yellow","blue","magenta","cyan","white"};

struct box_props {
    bool opaque : 1;
    unsigned int fill_color : 3;
    unsigned int : 4;
    bool show_border : 1;
    unsigned int border_color : 3;
    unsigned int border_style : 2;
    unsigned int : 2;
};

void show_settings(const struct box_props* pb);

int main(int argc, const char * argv[]) {
    // --------------------- 摘要
    /*
     15 位操作
     
     15.1 二进制数、位和字节
     15.1.1 二进制整数
     15.1.2 有符号整数
     15.1.3 二进制浮点数
     
     15.2 其他进制数
     15.2.1 八进制
     15.2.2 十六进制
     
     15.3 C按位运算符
     15.3.1 按位逻辑运算符
     15.3.2 用法：掩码
     15.3.3 用法：打开位(设置位)
     15.3.4 用法：关闭位(清空位)
     15.3.5 用法：切换位
     15.3.6 用法：检查位的值
     15.3.7 移位运算符
     15.3.8 编程示例
     15.3.9 另一个例子
     
     15.4 位字段
     15.4.1 位字段示例
     15.4.2 位字段和按位运算符
     
     15.5 对齐特性(C11)
     
     15.6 关键概念
     
     15.7 本章小结
    */
    
    // --------------------- Code
    // 15.3
    struct box_props box = {
        true,
        YELLOW,
        true,
        GREEN,
        DASHED
    };
    printf("Original box settings:\n");
    show_settings(&box);
    box.opaque = false;
    box.fill_color = WHITE;
    box.border_color = MAGENTA;
    box.border_style = SOLID;
    printf("\nModified box settings:\n");
    show_settings(&box);
    
    // 15.2
    /*char bin_str[CHAR_BIT * sizeof(int)+1];
    int number;
    puts("Enter integers and see them in binary.");
    puts("Non-numeric input terminates program.");
    while (scanf("%d", &number) == 1) {
        itobs(number, bin_str);
        printf("%d is ", number);
        show_bstr(bin_str);
        putchar('\n');
        number = invert_end(number, 4);
        printf("Inverting the last 4 bits gives \n");
        show_bstr(itobs(number, bin_str));
        putchar('\n');
    }
    puts("Bye!");*/
    
    // 15.1
    /*char bin_str[CHAR_BIT * sizeof(int)+1];
    int number;
    puts("Enter integers and see them in binary.");
    puts("Non-numeric input terminates program.");
    while (scanf("%d", &number) == 1) {
        itobs(number, bin_str);
        printf("%d is ", number);
        show_bstr(bin_str);
        putchar('\n');
    }
    puts("Bye!");*/
    
    return 0;
}

void show_settings(const struct box_props* pb) {
    printf("Box is %s.\n", pb->opaque == true ? "opaque" : "transparent");
    printf("The fill color is %s.\n", colors[pb->fill_color]);
    printf("Border %s.\n", pb->show_border == true ? "shown" : "not shown");
    printf("The border color is %s.\n", colors[pb->border_color]);
    printf("The border style is ");
    switch (pb->border_style) {
        case SOLID:
            printf("solid. \n");
            break;
        case DOTTED:
            printf("dotted. \n");
            break;
        case DASHED:
            printf("dashen.\n");
            break;
        default:
            printf("unknow type.\n");
    }
}

int invert_end(int num, int bits) {
    int mask = 0;
    int bitval = 1;
    while (bits-->0) {
        mask |= bitval;
        bitval <<= 1;
    }
    return num^mask;
}

void show_bstr(const char *str) {
    int i = 0;
    while (str[i]) {
        putchar(str[i]);
        if (++i%4 == 0 && str[i]) {
            putchar(' ');
        }
    }
}

char *itobs(int n, char *ps) {
    int i;
    const static int size = CHAR_BIT*sizeof(int);
    for (i = size-1; i>= 0; i--, n>>=1) {
        ps[i] = (01 & n) + '0';
    }
    ps[size] = '\0';
    return ps;
}
