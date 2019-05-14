//
//  main.c
//  Chapter_11
//
//  Created by LiQunFei on 2019/5/9.
//  Copyright © 2019 IlreldI. All rights reserved.
//

#include <stdio.h>
#include <string.h>

#define MSG "I am a symbolic string constant."
#define MAXLENGTH 81

#define MSG_3 "I'm special"

#define SLEN 40
#define LIM 5

#define STLEN 81

#define STLEN_7 14

#define STLEN_8 10

#define STLEN_9 10

#define DEF "I am a #defined string."

#define SIZE 80

#define SIZE_19 30

#define BUGSIZE 13

#define ANSWER "Grant"

#define SIZE_20 40

#define SIZE_23 80

#define LIM_23 10

#define STOP "quit"

#define LISTSIZE 6

#define SIZE_25 40

#define LIM_25 5

#define WORDS "beast"

#define SIZE_26 40

#define SIZE_27 40

#define TARGSIZE 7

#define LIM_27 5

#define MAX 20

void put1(const char *string) {
    while (*string != '\0') {
        putchar(*string++);
    }
}

int put2(const char *string) {
    int count = 0;
    while (*string) {
        putchar(*string++);
        count++;
    }
    putchar('\n');
    return count;
}

void fit(char *, unsigned int);

char *s_gets(char *st, int n);

int main(int argc, const char * argv[]) {
    // ---------------------摘要
    /*
     11章 字符串和字符串函数
     
     11.1 表示字符串和字符串I/O
     11.1.1 在程序中定义字符串
     11.1.2 指针和字符串
     
     11.2 字符串输入
     11.2.1 分配空间
     11.2.2 不幸的gets()函数
     11.2.3 gets()的替代品
     11.2.4 scanf()函数
     
     11.3 字符串输出
     11.3.1 puts()函数
     11.3.2 fputs()函数
     11.3.3 printf()函数
     
     11.4 自定义输入/输出函数
     
     11.5 字符串函数
     11.5.1 strlen()函数
     11.5.2 strcat()函数
     11.5.3 strncat()函数
     11.5.4 strcmp()函数
     11.5.5 strcpy()和strncpy()
     11.5.6 sprintf()函数
     11.5.7 其他字符串函数
     */
    
    // ---------------------Code
    // 11.28
    /*char first[MAX];
    char last [MAX];
    char formal[2*MAX+10];
    double prize;
    puts("Enter your first name:");
    s_gets(first, MAX);
    puts("Enter your last name:");
    s_gets(last, MAX);
    puts("Enter your prize money:");
    scanf("%lf", &prize);
    sprintf(formal, "%s, %-19s: $%6.2f\n", last, first, prize);
    puts(formal);*/
    
    // 11.27
    /*char qwords[LIM_27][TARGSIZE];
    char temp[SIZE_27];
    int i = 0;
    printf("Enter %d words beginning with q:\n", LIM_27);
    while (i < LIM_27 && s_gets(temp, SIZE_27)) {
        if (temp[0] != 'q') {
            printf("%s doesn't begin with q!\n", temp);
        }
        else {
            strncpy(qwords[i], temp, TARGSIZE-1);
            i++;
        }
    }
    puts("Here are the words accepted:");
    for (i = 0; i < LIM_27; i++) {
        puts(qwords[i]);
    }*/
    
    // 11.26
    /*const char*orig = WORDS;
    char copy[SIZE_26] = "Be the best that you can be.";
    char *ps;
    puts(orig);
    puts(copy);
    ps = strcpy(copy+7, orig);
    puts(copy);
    puts(ps);*/
    
    // 11.25
    /*char qwords[LIM_25][SIZE_25];
    char temp[SIZE_25];
    int i = 0;
    printf("Enter %d words beginning with q:\n", LIM_25);
    while (i < LIM_25 && s_gets(temp, SIZE_25)) {
        if (temp[0] != 'q') {
            printf("%s doesn't begin with q!\n", temp);
        }
        else {
            strcpy(qwords[i], temp);
            i++;
        }
    }
    puts("Here are the words accepted:");
    for (i = 0; i < LIM_25; i++) {
        puts(qwords[i]);
    }*/
    
    // 11.24
    /*const char *list[LISTSIZE] = {"astronomy", "astounding", "astrophysics", "ostracize", "asterism", "astrophobia"};
    int count = 0;
    int i;
    for (i = 0; i < LISTSIZE; i++) {
        if (strncmp(list[i], "astro", 5) == 0) {
            printf("Found: %s\n", list[i]);
            count++;
        }
    }
    printf("The list contained %d words beginning"
           " with astro.\n", count);*/
    
    // 11.23
    /*char input[LIM_23][SIZE_23];
    int ct = 0;
    printf("Enter up to %d lines (type quit to quit):\n", LIM_23);
    while (ct < LIM_23 &&
           s_gets(input[ct], SIZE_23) != NULL &&
           strcmp(input[ct], STOP) != 0) {
        ct++;
    }
    printf("%d strings entered\n", ct);*/
    
    // 11.22
    /*printf("strcmp(\"A\", \"A\") is ");
    printf("%d\n", strcmp("A", "A"));
    printf("strcmp(\"A\", \"B\") is ");
    printf("%d\n", strcmp("A", "B"));
    printf("strcmp(\"B\", \"A\") is ");
    printf("%d\n", strcmp("B", "A"));
    printf("strcmp(\"C\", \"A\") is ");
    printf("%d\n", strcmp("C", "A"));
    printf("strcmp(\"Z\", \"a\") is ");
    printf("%d\n", strcmp("Z", "a"));
    printf("strcmp(\"apples\", \"apple\") is ");
    printf("%d\n", strcmp("apples", "apple"));*/
    
    // 11.21
    /*char try[SIZE];
    puts("Who is buried in Grant's tomb?");
    s_gets(try, SIZE_20);
    while (strcmp(try, ANSWER) != 0) {
        puts("No, that's wrong. Try again.");
        s_gets(try, SIZE);
    }
    puts("That's right!");*/
    
    // 11.20
    /*char try[SIZE];
    puts("Who is buried in Grant's tomb?");
    s_gets(try, SIZE_20);
    while (try != ANSWER) {
        puts("No, that's wrong. Try again.");
        s_gets(try, SIZE);
    }
    puts("That's right!");*/
    
    // 11.19
    /*char flower[SIZE_19];
    char addon[] = "s smell like old shoes.";
    char bug[BUGSIZE];
    int available;
    puts("What is your favorite flower?");
    s_gets(flower, SIZE_19);
    if ((strlen(addon) + strlen(flower) + 1) <= SIZE_19) {
        strcat(flower, addon);
    }
    puts(flower);
    puts("What is your favorite bug?");
    s_gets(bug, BUGSIZE);
    available = BUGSIZE - strlen(bug) - 1;
    strncat(bug, addon, available);
    puts(bug);*/
    
    // 11.18
    /*char flower[SIZE];
    char addon[] = "s smell like old shoes.";
    puts("What is your favorite flower?");
    if (s_gets(flower, SIZE)) {
        strcat(flower, addon);
        puts(flower);
        puts(addon);
    }
    else {
        puts("End of file encountered!");
        puts("bye");
    }*/
    
    // 11.17
    /*char mseg[] = "Things should be as simple as possible,"
    " but not simpler.";
    puts(mseg);
    fit(mseg, 38);
    puts(mseg);
    puts("Let's look at some of the string.");
    puts(mseg + 39);*/
    
    // 11.16
    /*put1("If I'd as much money");
    put1(" as I could spend,\n");
    printf("I count %d characters.\n", put2("I never would cry old chairs to mend."));*/
    
    // 11.15
    /*char *testStr_15 = "You are my shine.";
    printf("testStr_15 have %d char.", put2(testStr_15));*/
    
    // 11.14
    /*char *testStr_14 = "ABCdefgHijk";
    put1(testStr_14);*/
    
    // 11.13
    /*char side_a[] = "Side A";
    char dont[] = {'W', 'O', 'W', '!'};
    char side_b[] = "Side B";
    puts(dont);*/
    
    // 11.12
    /*char str1[80] = "An array was initialized to me.";
    const char *str2 = "A pointer was initialized to me.";
    puts("I'm an argument to puts().");
    puts(DEF);
    puts(str1);
    puts(str2);
    puts(&str1[5]);
    puts(str2+4);*/
    
    // 11.11
    /*char name1[11], name2[11];
    int count;
    printf("Please enter 2 names.\n");
    count = scanf("%5s %10s", name1, name2);
    printf("I read the %d names %s and %s.\n", count, name1, name2);*/
    
    // 11.9
    /*char words[STLEN_9];
    int i;
    puts("Enter strings (empty line to quit):");
    while (fgets(words, STLEN_9, stdin) != NULL && words[0] != '\n') {
        i = 0;
        while (words[i] != '\n' && words[i] != '\0') {
            i++;
        }
        if (words[i] == '\n') {
            words[i] = '\0';
        }
        else {
            while (getchar() != '\n') {
                continue;
            }
        }
        puts(words);
    }
    puts("Done");*/
    
    // 11.8
    /*char words[STLEN_8];
    puts("Enter string s (empty line to quit):");
    while (fgets(words, STLEN_8, stdin) != NULL && words[0] != '\n') {
        fputs(words, stdout);
    }
    puts("Done.");*/
    
    // 11.7
    /*char words[STLEN_7];
    puts("Enter a string, please.");
    fgets(words, STLEN_7, stdin);
    printf("Your string twice (puts(),then fputs()):\n");
    puts(words);
    fputs(words, stdout);
    puts("Enter another string, please.");
    fgets(words, STLEN_7, stdin);
    printf("Your string twice (puts(),then fputs()):\n");
    puts(words);
    fputs(words, stdout);
    puts("Done.");*/
    
    // 11.6
    /*char words[STLEN];
    puts("Enter a string, please.");
    gets(words);
    printf("Your string twice:\n");
    printf("%s\n", words);
    puts(words);
    puts("Done.");*/
    
    // 11.5
    /*const char *mesg = "Dont't be a fool!";
    const char *copy;
    copy = mesg;
    printf("%s\n", copy);
    printf("mesg = %s; &mesg = %p; value = %p\n", mesg, &mesg, mesg);
    printf("copy = %s; &copy = %p; value = %p\n", copy, &copy, copy);*/
    
    // 11.4
    /*const char *mytalents[LIM] = {"Adding numbers swiftly",
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
    printf("\nsizeof mytalents: %zd, sizeof yourtalents: %zd\n", sizeof(mytalents), sizeof(yourtalents));*/
    
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

char *s_gets(char *st, int n) {
    char *ret_val;
    int i = 0;
    ret_val = fgets(st, n, stdin);
    if (ret_val) {
        while (st[i] != '\n' && st[i] != '\0') {
            i++;
        }
        if (st[i] == '\n') {
            st[i] = '\0';
        }
        else {
            while (getchar() != '\n') {
                continue;
            }
        }
    }
    return ret_val;
}

void fit(char *string, unsigned int size) {
    if (strlen(string) > size) {
        string[size] = '\0';
    }
}
