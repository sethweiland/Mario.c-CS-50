//
//  main.c
//  CS50_Week1
//
//  Created by Seth Weiland on 10/16/18.
//  Copyright © 2018 SethWeiland. All rights reserved.
//

#include <cs50.h>
#include <stdio.h>


int main(void) {
    int height;
    int space;
    int dash;
    int a = 0;
    height = get_int("How tall is Mario's pyramid?: ");
    //height = get_int("%s", s);
    
    while (height < 0 || height > 8) {
        height = get_int("Incorrect value please go again: ");
    }
    do {
        
        
        for(int x = 1; x<=height; x++) {
            
            for(space = height- 1; space>=0 ; space--) {
                printf(" ");
            }
            for (dash = 1; dash <= x ; dash++) {
                printf("#");
            }
            printf("\n");
        }
        a++;
    } while (a<1);
}
