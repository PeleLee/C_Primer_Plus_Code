//
//  main.c
//  Chapter_13
//
//  Created by LiQunFei on 2019/5/18.
//  Copyright © 2019 IlreldI. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    // ------------------------ 摘要
    /*
     13 文件输入/输出
     
     13.1 与文件进行通信
     13.1.1 文件是什么
     13.1.2 文本模式和二进制模式
     13.1.3 I/O的级别
     13.1.4 标准文件
     
     13.2 标准I/O
     13.2.1 检查命令行参数
     13.2.2 fopen()函数
     */
    // ------------------------ Code
    // 13.1
    int ch;
    FILE *fp;
    unsigned long count = 0;
    if (argc != 2) {
        printf("argc: %d\n", argc);
        printf("Usage: %s filename \n", argv[0]);
        exit(EXIT_FAILURE);
    }
    if ((fp = fopen(argv[1], "r")) == NULL) {
        printf("Can't open %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    while ((ch = getc(fp)) != EOF) {
        putc(ch, stdout);
        count++;
    }
    fclose(fp);
    printf("File %s has %lu characters \n", argv[1], count);
    
    return 0;
}
