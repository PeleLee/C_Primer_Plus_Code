//
//  main.c
//  Chapter_13
//
//  Created by LiQunFei on 2019/5/18.
//  Copyright © 2019 IlreldI. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LEN 40

#define MAX 41

#define CNTL_Z '\032'

#define SLEN 81

int main(int argc, const char * argv[]) {
    // ------------------------ 摘要
    /*
     13 文件输入/输出
     
     13.1 与文件进行通信
     13.1.1 文件是什么
     13.1.2 文本模式和二进制模式
     13.1.3 I/O的级别
     13.1.4 标准文件
     
     13.2 标准I/O
     13.2.1 检查命令行参数
     13.2.2 fopen()函数
     13.2.3 getc()和putc()函数
     13.2.4 文件结尾
     13.2.5 fclose()函数
     13.2.6 指向标准文件的指针
     
     13.3 一个简单的文件压缩程序
     
     13.4 文件I/O: fprintf()、fscanf()、fgets()和fputs()
     13.4.1 fprintf()和scanf()函数
     13.4.2 fgets()和fputs()函数
     
     13.5 随机访问:fseek()和ftell()
     13.5.1 fseek()和ftell()的工作原理
     13.5.2 二进制模式和文本模式
     13.5.3 可移植性
     13.5.4 fgetpos()和fsetpos()函数
     
     13.6 标准I/O的机理
     
     13.7 其他标准I/O函数
     13.7.1 int ungetc(int c, FILE *fp)函数
     13.7.2 int fflush()函数
     13.7.3 int setvbuf()函数
     13.7.4 二进制I/O:fread()和fwrite()
     13.7.5 size_t fwrite()函数
     13.7.6 size_t fread()函数
     13.7.7 int feof(FILE *fp)和int ferror(FILE *fp)函数
     13.7.8 一个程序示例
     13.7.9 用二进制I/O进行随机访问
     
     13.8 关键概念
     
     13.9 本章小结
     */
    // ------------------------ Code
    // 13.4
    char file[SLEN];
    char ch;
    FILE *fp;
    long count, last;
    puts("Enter the name of the file to be processed:");
    scanf("%80s", file);
    if ((fp = fopen(file, "rb")) == NULL) {
        printf("reverse can't open %s\n", file);
        exit(EXIT_FAILURE);
    }
    fseek(fp, 0L, SEEK_END);
    last = ftell(fp);
    for (count = 1L; count <= last; count++) {
        fseek(fp, -count, SEEK_END);
        ch = getc(fp);
        if (ch != CNTL_Z && ch != '\r') {
            putchar(ch);
        }
    }
    putchar('\n');
    fclose(fp);
    
    // 13.3
    /*FILE *fp;
    char words[MAX];
    if ((fp = fopen("wordy", "a+")) == NULL) {
        fprintf(stdout, "Can't open \"wordy\" file.\n");
        exit(EXIT_FAILURE);
    }
    puts("Enter words to add to the file; press the # ");
    puts("key at the beginning of a line to terminate.");
    while ((fscanf(stdin, "%40s", words) == 1) && (words[0] != '#')) {
        fprintf(fp, "%s\n", words);
    }
    puts("File contents:");
    rewind(fp);
    while (fscanf(fp, "%s", words) == 1) {
        puts(words);
    }
    puts("Done!");
    if (fclose(fp) != 0) {
        fprintf(stderr, "Error closing file\n");
    }*/
    
    // 13.2
    /*FILE *in, *out;
    int ch;
    char name[LEN];
    int count = 0;
    if (argc < 2) {
        fprintf(stderr, "Usage: %s filename\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    if ((in = fopen(argv[1], "r")) == NULL) {
        fprintf(stderr, "I couldn't open the file \"%s\"\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    strncpy(name, argv[1], LEN-5);
    name[LEN-5] = '\0';
    strcat(name, ".red");
    if ((out = fopen(name, "w")) == NULL) {
        fprintf(stderr, "Can't create output file.\n");
        exit(3);
    }
    while ((ch = getc(in)) != EOF) {
        if (count++ %3 == 0) {
            putc(ch, out);
        }
    }
    if (fclose(in) != 0 || fclose(out) != 0) {
        fprintf(stderr, "Error in closing files\n");
    }*/
    
    // 13.1
    /*int ch;
    FILE *fp;
    unsigned long count = 0;
    if (argc != 2) {
        printf("argc: %d\n", argc);
        printf("Usage: %s filename \n", argv[0]);
        exit(EXIT_FAILURE);
    }
    if ((fp = fopen(argv[1], "r")) == NULL) {
        printf("Can't open %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    while ((ch = getc(fp)) != EOF) {
        putc(ch, stdout);
        count++;
    }
    fclose(fp);
    printf("File %s has %lu characters \n", argv[1], count);*/
    
    return 0;
}
