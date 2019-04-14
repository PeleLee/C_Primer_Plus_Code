//
//  main.c
//  Chapter_2
//
//  Created by LiQunFei on 2019/4/13.
//  Copyright © 2019 IlreldI. All rights reserved.
//

#include <stdio.h>

// 2.3
void butler(void);

int main(int argc, const char * argv[]) {
    
    // 2.4 有bug的程序
    /*int n, int n2, int n3;
    n = 5;
    n2 = n*n;
    n3 = n2*n2;
    printf("n = %d, n squared = %d, n cubed = %d\n",n,n2,n3);*/
    
    // 2.3
    /*printf("I will summon the butler function.\n");
    
    butler();
    
    printf("Yes.Bring me some tea and writeable DVDs.\n");*/
    
    // 2.2
    /*
    int feet, fathoms;
    
    fathoms = 2;
    feet = 6*fathoms;
    
    printf("There are %d feet in %d fathoms!\n",feet,fathoms);
    printf("Yes, I said %d feet!\n",6*fathoms);*/
    
    // 2.1.1
    /*
     希望能运行。
    int x = 100;
    int y = 200;
    /*其他内容已省略。*/
    
    // 2.1
    /*int num;
    num = 1;
    printf("I'm a simple ");
    printf("computer.\n");
    printf("My favorite number is %d because it is first.\n",num);*/
    
    return 0;
}

// 2.3
void butler(void) {
    printf("You rang,sir?\n");
}

