//
//  main.c
//  Chapter_14
//
//  Created by LiQunFei on 2019/5/21.
//  Copyright © 2019 IlreldI. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *s_gets(char *st, int n);

#define  MAXTITL 41

#define MAXAUTL 31

struct book {
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};

#define MAXTITL_2 40

#define MAXAUTL_2 40

#define MAXBKS 100

struct book_2 {
    char title[MAXTITL_2];
    char author[MAXAUTL_2];
    float value;
};

#define LEN 20

const char *msgs[5] = {
    " Thank you for the wonderful evening,",
    " You certainly prove that a ",
    " is a special kind of guy. We must get together",
    " over a delicious",
    " and have a few laughs"
};

struct names {
    char first[LEN];
    char last[LEN];
};

struct guy {
    struct names handle;
    char favfood[LEN];
    char job[LEN];
    float income;
};

#define FUNDLEN 50

struct funds {
    char bank[FUNDLEN];
    double bankfund;
    char save[FUNDLEN];
    double savefund;
};

double sum(double, double);

double sum_6(const struct funds *);

#define NLEN 30

struct namect {
    char fname[NLEN];
    char lname[NLEN];
    unsigned long letters;
};

void getinfo(struct namect *);
void makeinfo(struct namect *);
void showinfo(const struct namect*);

struct namect getinfo_9(void);
struct namect makeinfo_9(struct namect);
void showinfo_9(struct namect);

#define SLEN 81

struct namect_10 {
    char *fname;
    char *lname;
    unsigned long letters;
};

void getinfo_10(struct namect_10*);
void makeinfo_10(struct namect_10*);
void showinfo_10(const struct namect_10*);
void cleanup(struct namect_10*);

#define MAXTITL 41

#define MAXAUTL 31

struct book_11 {
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
     13.3.2 访问结构成员
     14.3.3 结构的初始化器
     
     14.4 结构数组
     14.4.1 声明结构数组
     14.4.2 标识结构数组的成员
     14.4.3 程序讨论
     
     14.5 嵌套结构
     
     14.6 指向结构的指针
     14.6.1 声明和初始化结构指针
     14.6.2 用指针访问成员
     
     14.7 向函数传递结构的信息
     14.7.1 传递结构成员
     14.7.2 传递结构的地址
     14.7.3 传递结构
     14.7.4 其他结构特性
     14.7.5 结构和结构指针的选择
     14.7.6 结构中的字符数组和字符指针
     14.7.7 结构、指针和malloc()
     14.7.8 复合字面量和结构(C99)
     */
    
    // -------------------------------------- Code
    // 14.11
    /*struct book_11 readfirst;
    int score;
    printf("Enter test score:");
    scanf("%d", &score);
    if (score >= 84) {
        readfirst = (struct book_11) {
            "Crime and Punishment",
            "Fyodor Dostoyevsky",
            11.25
        };
    }
    else {
        readfirst = (struct book_11) {
            "Mr.Bouncy's Nice Hat",
            "Fred Winsome",
            5.99
        };
    }
    printf("Your assigned reading:\n");
    printf("%s  by  %s: $ %.2f \n", readfirst.title, readfirst.author, readfirst.value);*/
    
    // 14.10
    /*struct namect_10 person;
    getinfo_10(&person);
    makeinfo_10(&person);
    showinfo_10(&person);
    cleanup(&person);*/
    
    // 14.9
    /*struct namect person;
    person = getinfo_9();
    person = makeinfo_9(person);
    showinfo_9(person);*/
    
    // 14.8
    /*struct namect person;
    getinfo(&person);
    makeinfo(&person);
    showinfo(&person);*/
    
    // 14.6
    /*struct funds stan = {
        "Garlic-Melon Bank",
        4032.27,
        "Lucky's Savings and Loan",
        8543.94
    };
    printf("Stan has a total of $%.2f.\n", sum_6(&stan));*/
    
    // 14.5
    /*struct funds stan = {
        "Garlic-Melon Bank",
        4032.27,
        "Lucky's Savings and Loan",
        8543.94
    };
    printf("Stan has a total of $%.2f.\n", sum(stan.bankfund, stan.savefund));*/
    
    // 14.4
    /*struct guy fellew[2] = {
        {
            {"Ewen", "Villard"},
            "grilled salmon",
            "personality coach",
            68112.00
        },
        {
            {"Rodney", "Swillbelly"},
            "tripe",
            "tabloid editor",
            432400.00
        }
    };
    struct guy *him;
    printf("address #1: %p #2: %p \n", &fellew[0], &fellew[1]);
    him = &fellew[0];
    printf("pointer #1: %p #2: %p \n", him, him+1);
    printf("him->income is $%.2f:(*him).income is $%.2f\n", him->income, (*him).income);
    him++;
    printf("him->favfood is %s: him->handle.last is %s\n", him->favfood, him->handle.last);*/
    
    // 14.3
    /*struct guy fellow = {
        {"Ewen", "Villard"},
        "grilled salmon",
        "personality coach",
        68112.00
    };
    printf("Dear    %s, \n \n", fellow.handle.first);
    printf("%s  %s.  \n", msgs[0], fellow.handle.first);
    printf("%s%s\n", msgs[1], fellow.job);
    printf("%s\n", msgs[2]);
    printf("%s  %s  %s", msgs[3], fellow.favfood, msgs[4]);
    if (fellow.income > 150000.0) {
        puts("!!");
    }
    else if (fellow.income) {
        puts("!");
    }
    else {
        puts(".");
    }
    printf("\n %40s %s \n", " ", "See you soon,");
    printf("%40s%s\n", " ", "Shalala");*/
    
    // 14.2
    /*struct book_2 library[MAXBKS];
    
    int count = 0;
    
    int index;
    
    printf("Please enter the book title.\n");
    
    printf("Press [enter] at the start of a line to stop.\n");
    
    while (count < MAXBKS &&
           s_gets(library[count].title, MAXTITL_2) != NULL &&
           library[count].title[0] != '\0') {
        printf("Now enter the author.\n");
        s_gets(library[count].author, MAXAUTL_2);
        printf("Now enter the value.\n");
        scanf("%f", &library[count++].value);
        while (getchar() != '\n') {
            continue;
        }
        if (count < MAXBKS) {
            printf("Enter the next title.\n");
        }
    }
    if (count > 0) {
        printf("Here is the list of your books:\n");
        for (index = 0; index < count; index++) {
            printf("%s by %s: $ %.2f \n", library[index].title, library[index].author, library[index].value);
        }
    }
    else {
        printf("No books? Too bad.\n");
    }*/
    
    // 14.1
    /*struct book library;
    printf("Please enter the book title.\n");
    s_gets(library.title, MAXTITL);
    printf("Now enter the authou.\n");
    s_gets(library.author, MAXAUTL);
    printf("Now enter the value.\n");
    scanf("%f", &library.value);
    printf("%s by %s: $ %.2f \n", library.title, library.author, library.value);
    printf("%s: \"%s \"($ %.2f)\n", library.author, library.title, library.value);
    printf("Done.\n");*/
    
    return 0;
}

void cleanup(struct namect_10*pst) {
    free(pst->fname);
    free(pst->lname);
}

void showinfo_10(const struct namect_10*pst) {
    printf("%s %s, your name contains %ld letters.\n", pst->fname, pst->lname, pst->letters);
}

void makeinfo_10(struct namect_10*pst) {
    pst->letters = strlen(pst->fname)+strlen(pst->lname);
}

void getinfo_10(struct namect_10*pst) {
    char temp[SLEN];
    printf("Please enter your first name.\n");
    s_gets(temp, SLEN);
    pst->fname = (char *)malloc(strlen(temp)+1);
    strcpy(pst->fname, temp);
    printf("Please enter your last name.\n");
    s_gets(temp, SLEN);
    pst->lname = (char *)malloc(strlen(temp)+1);
    strcpy(pst->lname, temp);
}

void showinfo_9(struct namect info) {
    printf("%s %s, your name contains %ld letters.\n", info.fname, info.lname, info.letters);
}

struct namect makeinfo_9(struct namect info) {
    info.letters = strlen(info.fname) + strlen(info.lname);
    return info;
}

struct namect getinfo_9(void) {
    struct namect temp;
    printf("Please enter your first name.\n");
    s_gets(temp.fname, NLEN);
    printf("Please enter your last name.\n");
    s_gets(temp.lname, NLEN);
    return temp;
}

void showinfo(const struct namect*pst) {
    printf("%s %s, your name contains %ld letters.\n", pst->fname, pst->lname, pst->letters);
}

void makeinfo(struct namect *pst) {
    pst->letters = strlen(pst->fname) + strlen(pst->lname);
}

void getinfo(struct namect *pst) {
    printf("Please enter your first name.\n");
    s_gets(pst->fname, NLEN);
    printf("Please enter your last name.\n");
    s_gets(pst->lname, NLEN);
}

double sum_6(const struct funds *money) {
    return (money->bankfund + (*money).savefund);
}

double sum(double x, double y) {
    return (x+y);
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
