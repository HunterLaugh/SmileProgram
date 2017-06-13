// three number like a b c ,
// a!=b b!=c a!=c  0;
// a=b b!=c 1;
// a=b=c  2;

#include<stdio.h>
#include "smile.h"
void main(void) {
    int a,b,c;
    
    printf("Pls input an integer: ");
    a=get_int();
    printf("a is  %d\n",a);
    b=get_int();
    printf("b is  %d\n",b);
    c=get_int();
    printf("a is  %d\n",c);
    
    if(a==b&&b==c)
        printf("2\n");
    else
        if(a!=b&&b!=c&&a!=c)
            printf("0\n");
        else
            printf("1\n");
        
}