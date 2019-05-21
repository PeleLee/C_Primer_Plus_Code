//
//  main.c
//  Chapter_14
//
//  Created by LiQunFei on 2019/5/21.
//  Copyright © 2019 IlreldI. All rights reserved.
//

#include <stdio.h>
#include <string.h>

char *s_gets(char *st, int n);

#define  MAXTITL 41

#define MAXAUTL 31

struct book {
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};

int main(int argc, const char * argv[]) {
    // -------------------------------------- 摘要
    /*
     14 结构和其他数据形式
     
     14.1 示例问题：创建图书目录
     
     14.2 建立结构声明
     
     14.3 定义结构变量
     14.3.1 初始化结构
     */
    
    // -------------------------------------- Code
    // 14.1
    struct book library;
    printf("Please enter the book title.\n");
    s_gets(library.title, MAXTITL);
    printf("Now enter the authou.\n");
    s_gets(library.author, MAXAUTL);
    printf("Now enter the value.\n");
    scanf("%f", &library.value);
    printf("%s by %s: $ %.2f \n", library.title, library.author, library.value);
    printf("%s: \"%s \"($ %.2f)\n", library.author, library.title, library.value);
    printf("Done.\n");
    
    return 0;
}

char *s_gets(char *st, int n) {
    char *ret_val;
    char *find;
    ret_val = fgets(st, n, stdin);
    if (ret_val) {
        find = strchr(st, '\n');
        if (find) {
            *find = '\0';
        }
        else {
            while (getchar() != '\n') {
                continue;
            }
        }
    }
    return ret_val;
}
