//
//  main.c
//  Chapter_9
//
//  Created by LiQunFei on 2019/5/3.
//  Copyright © 2019 IlreldI. All rights reserved.
//

#include <stdio.h>

#define NAME "GIGATHINK, INC."
#define ADDRESS "101 Megabuck Plaza"
#define PLACE "Megapolis, CA 94904"
#define WIDTH 40

void starbar(void);

int main(int argc, const char * argv[]) {
    // --------------摘要
    /*
     9 函数
     
     9.1 复习函数
     9.1.1 创建并使用简单函数
     9.1.2 分析程序
     */
    
    // --------------Code
    // 9.1
    starbar();
    printf("%s\n", NAME);
    printf("%s \n", ADDRESS);
    printf("%s\n", PLACE);
    starbar();
    
    return 0;
}

void starbar(void) {
    int count;
    for (count = 1; count <= WIDTH; count++) {
        putchar('*');
    }
    putchar('\n');
}
