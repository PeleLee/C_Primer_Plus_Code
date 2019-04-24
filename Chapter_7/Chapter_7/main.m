//
//  main.m
//  Chapter_7
//
//  Created by LiQunFei on 2019/4/24.
//  Copyright © 2019 IlreldI. All rights reserved.
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[]) {
    
    /* --摘要-- */
    /*
     7 C控制语句：分支和跳转
     7.1 if语句
     */
    
    /* --Code-- */
    
    // 7.1
    const int FREEZING = 0;
    float temperature;
    int cold_days = 0;
    int all_days = 0;
    printf("Enter the list of daily low temperatures.\n");
    printf("Use Celsius, and enter q to quit.\n");
    while (scanf("%f", &temperature) == 1) {
        all_days++;
        if (temperature < FREEZING) {
            cold_days++;
        }
    }
    if (all_days != 0) {
        printf("%d days total: %.1f %% were below freezing.\n", all_days, 100.0*(float)cold_days/all_days);
    }
    if (all_days == 0) {
        printf("No data entered!");
    }
    
    return 0;
}
