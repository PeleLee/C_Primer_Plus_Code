//
//  main.c
//  Chapter_6
//
//  Created by LiQunFei on 2019/4/21.
//  Copyright © 2019 IlreldI. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    /*--摘要--
     6 C控制语句：循环
     
     6.1 再探while循环
     6.1.1 程序注释
     */
    
    /*--Code--*/
    
    // 6.1 -- 根据用户键入的整数求和
    long num;
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
    printf("Those integers sum to %ld.\n", sum);
    
    return 0;
}
