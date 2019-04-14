//
//  main.c
//  Chapter_3
//
//  Created by LiQunFei on 2019/4/14.
//  Copyright © 2019 IlreldI. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // 3.1
    float weight;
    float value;
    
    printf("Are you worth your weight in platiunm(和你体重相同的铂金价值几何)?\n");
    printf("Let's check it out.(让我们来看看)\n");
    printf("Please enter your weight in pounds(输入你的英镑体重): ");
    
    scanf("%f",&weight);
    
    value = 1700.0 * weight * 14.5833;
    
    printf("You weight in platinum is worth $%.2f.\n",value);
    printf("You are easily worth that! If platinum prices drop,\n");
    printf("eat more to maintain your value.\n");
    
    return 0;
}
