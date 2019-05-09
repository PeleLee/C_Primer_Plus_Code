//
//  main.c
//  Chapter_11
//
//  Created by LiQunFei on 2019/5/9.
//  Copyright © 2019 IlreldI. All rights reserved.
//

#include <stdio.h>

#define MSG "I am a symbolic string constant."
#define MAXLENGTH 81

#define MSG_3 "I'm special"

#define SLEN 40
#define LIM 5

int main(int argc, const char * argv[]) {
    // ---------------------摘要
    /*
     11章 字符串和字符串函数
     
     11.1 表示字符串和字符串I/O
     11.1.1 在程序中定义字符串
     */
    
    // ---------------------Code
    // 11.4
    const char *mytalents[LIM] = {"Adding numbers swiftly",
        "Multiplying accurately",
        "Stashing data",
        "Following instructions to the letter",
        "Understanding the C language"};
    char yourtalents[LIM][SLEN] = {"Walking in a staight line",
        "Sleeping",
        "Watching television",
        "Mailing letters",
        "Reading email"};
    int i;
    puts("Let's compare talents.");
    printf("%-36s %-25s \n", "My talents", "Your Talents");
    for (i = 0; i < LIM; i++) {
        printf("%-36s %-25s \n", mytalents[i], yourtalents[i]);
    }
    printf("\nsizeof mytalents: %zd, sizeof yourtalents: %zd\n", sizeof(mytalents), sizeof(yourtalents));
    
    // 11.3
    /*char ar[] = MSG;
    const char *pt = MSG;
    printf("address of \"I'm special\": %p \n", "I'm special");
    printf("    address ar: %p\n", ar);
    printf("    address pt: %p\n", pt);
    printf("    address of MSG: %p\n", MSG);
    printf("    address of \"I'm special\": %p \n", "I'm special");*/
    
    // 11.2
    /*printf("%s, %p, %c\n", "We", "are", *"space farers");*/
    
    // 11.1
    /*char words[MAXLENGTH] = "I am a string in an array.";
    const char * pt1 = "Something is pointing at me.";
    puts("Here are some strings:");
    puts(MSG);
    puts(words);
    puts(pt1);
    words[8] = 'p';
    puts(words);*/
    
    return 0;
}
