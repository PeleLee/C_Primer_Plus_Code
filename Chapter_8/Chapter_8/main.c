//
//  main.c
//  Chapter_8
//
//  Created by LiQunFei on 2019/4/29.
//  Copyright © 2019 IlreldI. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    /*--摘要--*/
    /*
     8.字符输入/输出和输入验证
     
     8.1 单字符I/O:getchar()和putchar()
     
     8.2 缓冲区
     */
    /*--Code--*/
    // 8.1
    char ch;
    while ((ch = getchar()) != '#') {
        putchar(ch);
    }
    
    return 0;
}
