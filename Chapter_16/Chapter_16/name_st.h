//
//  name_st.h
//  Chapter_16
//
//  Created by LiQunFei on 2019/5/27.
//  Copyright © 2019 IlreldI. All rights reserved.
//

#ifndef name_st_h
#define name_st_h

#include "names_st.h"
#include "names_st.h"

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

void show_names(const names *pn) {
    printf("%s %s", pn->first, pn->last);
}

void get_names(names *pn) {
    printf("Please enter your first name:");
    s_gets(pn->first, SLEN);
    printf("Please enter your last name:");
    s_gets(pn->last, SLEN);
}

#endif /* name_st_h */
