//
//  names_st.h
//  Chapter_16
//
//  Created by LiQunFei on 2019/5/27.
//  Copyright © 2019 IlreldI. All rights reserved.
//

#ifndef names_st_h
#define names_st_h

#include <string.h>

#define SLEN 32

struct names_st {
    char first[SLEN];
    char last[SLEN];
};

typedef struct names_st names;

void get_names(names *);

void show_names(const names*);

char *s_gets(char *st, int n);

#endif /* names_st_h */
