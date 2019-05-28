//
//  tree.h
//  Chapter_17
//
//  Created by LiQunFei on 2019/5/28.
//  Copyright © 2019 IlreldI. All rights reserved.
//

#ifndef tree_h
#define tree_h

#include <sdbool.h>

#define SLEN 20

typedef struct item {
    char petname[SLEN];
    char petkind[SLEN];
} Item;

#define MAXITEMS 10

typedef struct trnode {
    Item item;
    struct trnode *left;
    struct trnode *right;
} Trnode;

typedef struct tree {
    Trnode *root;
    int size;
} Tree;

void InitializeTree(Tree *ptree);

bool TreelsEmpty(const Tree *ptree);

bool TreelsFull(const Tree *ptree);

int TreeItemCount(const Tree *ptree);

bool AddItem(const Item *pi, Tree *ptree);

bool InTree(const Item *pi, const Tree *ptree);

bool DeleteItem(const Item *pi, const Tree *ptree);

void Traverse(const Tree *ptree, void(*pfun)(Item item));

#endif /* tree_h */
