// judge three num can make triangle ?
// a+b>c  a+c>b  b+c>a

#include<stdio.h>
#include "smile.h"

void main(void) {
    int a,b,c;
    do {
        printf("Pls input three integer number: ");
    } while(scanf("%d%d%d",&a,&b,&c)!=3);
    
    if((a+b>c)&&(a+c>b)&&(b+c)>a)
        printf("Yes three number %d %d %d can make a triangle.\n",a,b,c);
    else
        printf("No not a triangle.\n");
}