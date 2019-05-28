//
//  list.h
//  Chapter_17
//
//  Created by LiQunFei on 2019/5/28.
//  Copyright © 2019 IlreldI. All rights reserved.
//

#ifndef list_h
#define list_h
#include <stdbool.h>

#define TSIZE_3 45

struct film_3 {
    char title[TSIZE_3];
    int rating;
};

typedef struct film_3 Item;

typedef struct node {
    Item item;
    struct node *next;
    
} Node;

typedef Node *List;

void InitializeList(List *plist);

bool ListIsEmpty(const List *plist);

bool ListIsFull(const List *plist);

unsigned int ListItemCount(const List *plist);

bool AddItem(Item item, List *plist);

void Traverse(const List *plist, void(* pfun)(Item item));

void EmptyTheList(List *plist);

#endif /* list_h */
