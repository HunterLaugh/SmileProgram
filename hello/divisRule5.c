// 能整除5,不能整除7-----Yes，else No

#include<stdio.h>

void main(void) {
    int num;
    
    do {
        printf("\nPlease input a int like -1,1,Your input is: ");
    } while(scanf("%d",&num)!=1);
    
    if((num%5==0)&&(num%7!=0))
        printf("Yes.\n");
    else
        printf("No.\n");
    
}