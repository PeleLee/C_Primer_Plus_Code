//
//  main.c
//  Chapter_10
//
//  Created by LiQunFei on 2019/5/5.
//  Copyright © 2019 IlreldI. All rights reserved.
//

#include <stdio.h>

#define MONTHS 12

#define SIZE 4

#define YEARS 2

#define SIZE_10 10

#define SIZE_5 5

#define ROWS 3
#define COLS 4

int sum(int ar[], int n);

int sump(int *start, int *end);

int data[2] = {100, 200};
int moredata[2] = {300, 400};

void show_array(const double ar[], int n);

void mult_array(double ar[], int n, double mult);

void sum_rows(int ar[][COLS], int rows);
void sum_cols(int [][COLS], int);
int sum2d(int(*ar)[COLS], int rows);

int sum2d_18(int rows, int cols, int ar[rows][cols]);

int sum2d_19(const int ar[][COLS], int rows);

int sum_19(const int ar[], int n);

int main(int argc, const char * argv[]) {
    
    // ----------------------------- 摘要
    /*
     10 数组和指针
     
     10.1 数组
     10.1.1 初始化数组
     10.1.2 指定初始化器
     10.1.3 给数组元素赋值
     10.1.4 数组边界
     10.1.5 指定数组的大小
     
     10.2 多维数组
     10.2.1 初始化二维数组
     10.2.2 其他多维数组
     
     10.3 指针和数组
     
     10.4 函数、数组和指针
     10.4.1 使用指针形参
     10.4.2 指针表示法和数组表示法
     
     10.5
     
     10.6 保护数组中的数据
     10.6.1 对形式参数使用const
     10.6.2 const的其他内容
     
     10.7 指针和多维数组
     10.7.1 指向多维数组的指针
     10.7.2 指针的兼容性
     10.7.3 函数和多维数组
     
     10.8 变长数组(VLA)
     
     10.9 复合字面量
     
     10.10 关键概念
     */
    
    // ----------------------------- Code
    // 10.19
    int total1, total2, total3;
    int *pt1;
    int (*pt2)[COLS];
    pt1 = (int[2]){10, 20};
    pt2 = (int[2][COLS]){{1, 2, 3, -9},{4, 5, 6, -8}};
    total1 = sum_19(pt1, 2);
    total2 = sum2d(pt2, 2);
    total3 = sum_19((int[]){4, 4, 4, 5, 5, 5}, 6);
    printf("total1 = %d\n", total1);
    printf("total2 = %d\n", total2);
    printf("total3 = %d\n", total3);
    
    // 10.18
    /*int i, j;
    int rs = 3;
    int cs = 10;
    int junk[ROWS][COLS] = {{2, 4, 6, 8},{3, 5, 7, 9},{12, 10, 8, 6}};
    int morejunk[ROWS-1][COLS+2] = {{20, 30, 40, 50, 60, 70},{5, 6, 7, 8, 9, 10}};
    int varr[rs][cs];
    for (i = 0; i < rs; i++) {
        for (j = 0; j < cs; j++) {
            varr[i][j] = i*j+j;
        }
    }
    printf("3x5 array\n");
    printf("Sum of all elements = %d \n", sum2d_18(ROWS, COLS, junk));
    printf("2x6 array\n");
    printf("Sum of all elements = %d \n", sum2d_18(ROWS-1, COLS+2, morejunk));
    printf("3x10 VLA\n");
    printf("Sum of all elements = %d \n", sum2d_18(rs, cs, varr));*/
    
    // 10.17
    /*int junk[ROWS][COLS] = {{2, 4, 6, 8},{3, 5, 7, 9},{12, 10, 8, 6}};
    sum_rows(junk, ROWS);
    sum_cols(junk, ROWS);
    printf("Sum of all elements = %d \n", sum2d(junk, ROWS));*/
    
    // 10.16
    /*int zippo[4][2] = {{2, 4},{6, 8},{1, 3},{5, 7}};
    int (* pz)[2];
    pz = zippo;
    printf("    pz = %p, pz + 1 = %p\n", pz, pz+1);
    printf("pz[0] = %p, pz[0] + 1 = %p\n", pz[0], pz[0]+1);
    printf(" *pz = %p, *pz+1 = %p\n", *pz, *pz+1);
    printf("pz[0][0] = %d\n", pz[0][0]);
    printf(" *pz[0] = %d\n", *pz[0]);
    printf(" **pz = %d \n", **pz);
    printf("    pz[2][1] = %d\n", pz[2][1]);
    printf("*(*(pz+2)+1) = %d\n", *(*(pz+2)+1));*/
    
    // 10.15
    /*int zippo[4][2] = {{2,4},{6, 8},{1, 3},{5, 7}};
    printf(" zippo = %p, zippo + 1 = %p\n", zippo, zippo+1);
    printf("zippo[0] = %p, zippo[0] + 1 = %p\n", zippo[0], zippo[0] + 1);
    printf(" *zippo = %p, *zippo + 1 = %p\n",*zippo, *zippo+1);
    printf("zippo[0][0] = %d\n", zippo[0][0]);
    printf(" *zippo[0] = %d\n", *zippo[0]);
    printf(" **zippo = %d\n", **zippo);
    printf(" zippo[2][1] = %d\n", zippo[2][1]);
    printf("*(*zippo+2) + 1) = %d\n", *(*(zippo+2)+1));*/
    
    // 10.14
    /*double dip[SIZE_5] = {20.0, 17.66, 8.2, 15.3, 22.22};
    printf("The original dip array:\n");
    show_array(dip, SIZE_5);
    mult_array(dip, SIZE_5, 2.5);
    printf("The dip array after calling mult_array():\n");
    show_array(dip, SIZE_5);*/
    
    // 10.13
    /*int urn[5] = {100, 200, 300, 400, 500};
    int *ptr1, *ptr2, *ptr3;
    ptr1 = urn;
    ptr2 = &urn[2];
    printf("pointer value, dereferenced pointer, pointer address:\n");
    printf("ptr1 = %p, *ptr1 = %d, &ptr1 = %p\n", ptr1, *ptr1, &ptr1);
    ptr3 = ptr1+4;
    printf("\nadding an int to a pointer:\n");
    printf("ptr1 + 4 = %p, *(ptr1 + 4) = %d\n", ptr1 + 4, *(ptr1 + 4));
    ptr1++;
    printf("\nvalues after ptr1++:\n");
    printf("ptr1 = %p, *ptr1 = %d, &ptr1 =  %p", ptr1, *ptr1, &ptr1);
    ptr2--;
    printf("\nvalues after --ptr2:\n");
    printf("ptr2 = %p, *ptr2 = %d, &ptr2 = %p\n", ptr2, *ptr2, &ptr2);
    --ptr1;
    ++ptr2;
    printf("\nPointers reset to original values:\n");
    printf("ptr1 = %p, ptr2 = %p\n", ptr1, ptr2);
    printf("\nsubtracting one pointer from another:\n");
    printf("ptr2 = %p, ptr1 = %p, ptr2 - ptr1 = %td\n", ptr2, ptr1, ptr2 - ptr1);
    printf("\nsubtracting an int from a pointer:\n");
    printf("ptr3 = %p, ptr3 - 2 = %p\n", ptr3, ptr3 - 2);*/
    
    // 10.12
    /*int *p1, *p2, *p3;
    p1 = p2 = data;
    p3 = moredata;
    printf(" *p1 = %d, *p2 = %d, *p3 = %d\n", *p1, *p2, *p3);
    printf("*p1++ = %d, *++p2 = %d, (*p3)++ = %d\n", *p1++, *++p2, (*p3)++);
    printf(" *p1 = %d, *p2 = %d, *p3 = %d\n", *p1, *p2, *p3);*/
    
    // 10.11
    /*int marbles[SIZE_10] = {20, 10, 5, 39, 4, 16, 19, 26, 31, 20};
    long answer;
    answer = sump(marbles, marbles+SIZE_10);
    printf("The total number of marbles is %ld.\n", answer);*/
    
    // 10.10
    /*int marbles[SIZE_10] = {20, 10, 5, 39, 4, 16, 19, 26, 31, 20};
    long answer;
    answer = sum(marbles, SIZE_10);
    printf("The total number of marbles is %ld.\n", answer);
    printf("The size of marbles is %zd bytes.\n", sizeof(marbles));*/
    
    // 10.9
    /*int days[MONTHS] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int index;
    for (index = 0; index < MONTHS; index++) {
        printf("Month %2d has %d days.\n", index + 1, *(days+index));
    }*/
    
    // 10.8
    /*short dates[SIZE];
    short *pti;
    short index;
    double bills[SIZE];
    double *ptf;
    pti = dates;
    ptf = bills;
    printf("%23s %15s \n", "short", "double");
    for (index = 0; index < SIZE; index++) {
        printf("pointers + %d: %10p %10p\n", index, pti+index, ptf+index);
    }*/
    
    // 10.7
    /*const float rain[YEARS][MONTHS] = {{4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},
                                       {8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3}
    };
    int year, month;
    float subtot, total;
    printf(" YEAR RAINFALL (inches)\n");
    for (year = 0, total = 0; year < YEARS; year++) {
        for (month = 0, subtot = 0; month < MONTHS; month++) {
            subtot += rain[year][month];
        }
        printf("%5d %15.1f\n", 2010 + year, subtot);
        total += subtot;
    }
    printf("\nThe yearly average is %.1f inches.\n\n", total/YEARS);
    printf("MONTHLY AVERAGES:\n\n");
    printf("  Jan Feb Mar Apr May Jun Jul Aug Sep Oct ");
    printf(" Nov Dec\n");
    for (month = 0; month < MONTHS; month++) {
        for (year = 0, subtot = 0; year < YEARS; year++) {
            subtot += rain[year][month];
        }
        printf("%4.1f ", subtot/YEARS);
    }
    printf("\n");*/
    
    // 10.6
    /*int value1 = 44;
    int arr[SIZE];
    int value2 = 88;
    int i;
    printf("value1 = %d, value2 = %d\n", value1, value2);
    for (i = -1; i <= SIZE; i++) {
        arr[i] = 2*i+1;
    }
    for (i = -1; i < 7; i++) {
        printf("%2d %d\n", i, arr[i]);
    }
    printf("value1 = %d, value2 = %d\n", value1, value2);
    printf("address of arr[-1]: %p\n", &arr[-1]);
    printf("address of arr[4]: %p\n", &arr[4]);
    printf("address of value1: %p\n", &value1);
    printf("address of value2: %p\n", &value2);*/
    
    // 10.5
    /*int days[MONTHS] = { 31, 28, [4] = 31, 30, 31, [1] = 29};
    int i;
    printf("days:\n");
    for (i = 0; i < MONTHS; i++) {
        printf("%2d %d\n", i+1, days[i]);
    }
    
    int stuff[] = {1, [6] = 23};
    int j;
    printf("stuff:\n");
    for (j = 0; j < sizeof(stuff)/sizeof(stuff[0]); j++) {
        printf("%2d %d\n", j+1, stuff[j]);
    }
    
    int stuff2[] = {1, [6] = 4, 9, 10};
    int z;
    printf("stuff2:\n");
    for (z = 0; z < sizeof(stuff2)/sizeof(stuff2[0]); z++) {
        printf("%2d %d\n", z+1, stuff2[z]);
    }*/
    
    // 10.4
    /*const int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31};
    int index;
    for (index = 0; index < sizeof(days)/sizeof(days[0]); index++) {
        printf("Month %2d has %d days.\n", index+1, days[index]);
    }*/
    
    // 10.3
    /*int some_data[SIZE] = {1492, 1066};
    int i;
    printf("%2s %14s \n", "i", "some_data[i]");
    for (i = 0; i < SIZE; i++) {
        printf("%2d %14d\n", i, some_data[i]);
    }*/
    
    // 10.2
    /*int no_data[SIZE];
    int i;
    printf("%2s %14s \n", "i", "no_data[i]");
    for (i = 0; i < SIZE; i++) {
        printf("%2d %14d\n", i, no_data[i]);
    }*/
    
    // 10.1
    /*const int days[MONTHS] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int index;
    for (index = 0; index < MONTHS; index++) {
        printf("Month %2d has %2d days.\n", index+1, days[index]);
    }*/
    
    return 0;
}

int sum2d_19(const int ar[][COLS], int rows) {
    int r;
    int c;
    int tot = 0;
    for (r = 0; r < rows; r++) {
        for (c = 0; c < COLS; c++) {
            tot += ar[r][c];
        }
    }
    return tot;
}

int sum_19(const int ar[], int n) {
    int i;
    int total = 0;
    for (i = 0; i < n; i++) {
        total += ar[i];
    }
    return total;
}

int sum2d_18(int rows, int cols, int ar[rows][cols]) {
    int r;
    int c;
    int tot = 0;
    for (r = 0; r < rows; r++) {
        for (c = 0; c < cols; c++) {
            tot += ar[r][c];
        }
    }
    return tot;
}

int sum2d(int(*ar)[COLS], int rows) {
    int r;
    int c;
    int tot = 0;
    for (r = 0; r < rows; r++) {
        for (c = 0; c < COLS; c++) {
            tot += ar[r][c];
        }
    }
    return tot;
}

void sum_cols(int ar[][COLS], int rows) {
    int r;
    int c;
    int tot;
    for (c = 0; c < COLS; c++) {
        tot = 0;
        for (r = 0; r < rows; r++) {
            tot += ar[r][c];
        }
        printf("col %d: sum = %d\n", c, tot);
    }
}

void sum_rows(int ar[][COLS], int rows) {
    int r;
    int c;
    int tot;
    for (r = 0; r < rows; r++) {
        tot = 0;
        for (c = 0; c < COLS; c++) {
            tot += ar[r][c];
        }
        printf("row %d: sum = %d\n", r, tot);
    }
}

void mult_array(double ar[], int n, double mult) {
    int i;
    for (i = 0; i < n; i++) {
        ar[i] *= mult;
    }
}

void show_array(const double ar[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%8.3f ", ar[i]);
    }
    putchar('\n');
}

int sump(int *start, int *end) {
    int total = 0;
    while (start < end) {
        /*total += *start;
        start++;*/
        total += *start++;
    }
    return total;
}

int sum(int ar[], int n) {
    int i;
    int total = 0;
    for (i = 0; i < n; i++) {
        total += ar[i];
    }
    printf("The size of ar is %zd bytes.\n", sizeof(ar));
    return total;
}
