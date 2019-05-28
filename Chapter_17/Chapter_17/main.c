//
//  main.c
//  Chapter_17
//
//  Created by LiQunFei on 2019/5/27.
//  Copyright © 2019 IlreldI. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "list.h"

#define TSIZE 45

#define FMAX 5

struct film {
    char title[TSIZE];
    int rating;
};

char *s_get(char str[], int lim);

#define TSIZE_2 45

struct film_2 {
    char title[TSIZE_2];
    int rating;
    struct film_2 *next;
};

void showmovies(Item item);

int main(int argc, const char * argv[]) {
    // ------------------- 摘要
    /*
     17 高级数据表示
     
     17.1 研究数据表示
     
     17.2 从数组到链表
     17.2.1 使用链表
     17.2.2 反思
     
     17.3 抽象数据类型(ADT)
     17.3.1 建立抽象
     17.3.2 建立接口
     17.3.3 使用接口
     17.3.4 实现接口
     
     17.4 队列ADT
     17.4.1 定义队列抽象数据类型
     17.4.2 定义一个接口
     17.4.3 实现接口数据表示
     17.4.4 测试队列
     
     17.5 用队列进行模拟
     
     17.6 链表和数组
     
     17.7 二叉查找树
     17.7.1 二叉树ADT
     17.7.2 二叉查找树接口
     17.7.3 二叉树的实现
     17.7.4 使用二叉树
     17.7.5 树的思想
     
     17.8 其他说明
     
     17.9 关键概念
     
     17.10 本章小结
     */
    
    // ------------------- Code
    // 17.10
    
    // 17.3-17.5
    /*List movies;
    Item temp;
    InitializeList(&movies);
    if (ListIsFull(&movies)) {
        fprintf(stderr, "No memory available! Bye!\n");
        exit(1);
    }
    puts("Enter first movie title:");
    while (s_get(temp.title, TSIZE_3) != NULL &&
           temp.title[0] != '\0') {
        puts("Enter your rating<0-10>:");
        scanf("%d", &temp.rating);
        while (getchar() != '\n') {
            continue;
        }
        if (AddItem(temp, &movies) == false) {
            fprintf(stderr, "Problem allocating memory\n");
            break;
        }
        if (ListIsFull(&movies)) {
            puts("The list is now full.");
            break;
        }
        puts("Enter next movie title (empty line to stop):");
    }
    if (ListIsEmpty(&movies)) {
        printf("No data entered.");
    }
    else {
        // 只能打印第一组信息
        printf("Here is the movie list:\n");
        Traverse(&movies, showmovies);
    }
    printf("You entered %d movies.\n", ListItemCount(&movies));
    printf("Bye!\n");*/
    
    // 17.2
    /*struct film_2 *head = NULL;
    struct film_2 *prev = NULL, *current;
    char input[TSIZE_2];
    puts("Enter first movie title:");
    while (s_get(input, TSIZE_2) != NULL && input[0] != '\0') {
        current = (struct film_2*)malloc(sizeof(struct film_2));
        if (head == NULL) {
            head = current;
        }
        else {
            prev->next = current;
        }
        current->next = NULL;
        strcpy(current->title, input);
        puts("Enter your rating <0-10>:");
        scanf("%d", &current->rating);
        while (getchar() != '\n') {
            continue;
        }
        puts("Enter next movie title (empty line to stop):");
        prev = current;
    }
    if (head == NULL) {
        printf("No data entered.");
    }
    else {
        printf("Here is the movie list:\n");
    }
    current = head;
    while (current != NULL) {
        printf("Movie:  %s  Rating: %d\n", current->title, current->rating);
        current = current->next;
    }
    current = head;
    while (head != NULL) {
        current = head;
        head = current->next;
        free(current);
    }
    printf("Bye!\n");*/
    
    // 17.1
    /*struct film movies[FMAX];
    int i = 0;
    int j;
    puts("Enter first movie title:");
    while (i < FMAX &&
           s_get(movies[i].title, TSIZE) != NULL &&
           movies[i].title[0] != '\0') {
        puts("Enter your rating <0-10>:");
        scanf("%d", &movies[i++].rating);
        while (getchar() != '\n') {
            continue;
        }
        puts("Enter next movie title (empty line to stop):");
    }
    if (i == 0) {
        printf("No data entered.");
    }
    else {
        printf("Here's is the movie list:\n");
    }
    for (j = 0; j < i; j++) {
        printf("Movie: %s Rating: %d\n", movies[j].title, movies[j].rating);
    }
    printf("Bye!\n");*/
    
    return 0;
}

void showmovies(Item item) {
    printf("Movie:  %s  Rating: %d\n", item.title, item.rating);
}

char *s_get(char str[], int lim) {
    char *ret_val;
    char *find;
    ret_val = fgets(str, lim, stdin);
    if (ret_val) {
        find = strchr(str, '\n');
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
