//
//  main.c
//  Chapter_15
//
//  Created by LiQunFei on 2019/5/23.
//  Copyright © 2019 IlreldI. All rights reserved.
//

#include <stdio.h>
#include <limits.h>

char *itobs(int, char *);
void show_bstr(const char *);
int invert_end(int num, int bits);

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
    */
    
    // --------------------- Code
    // 15.2
    char bin_str[CHAR_BIT * sizeof(int)+1];
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
    puts("Bye!");
    
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
