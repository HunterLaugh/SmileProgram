// year is  leap   %4=0 && %100!=0  ||%400=0

#include<stdio.h>
#include "smile.h"

void main(void) {
    int year, leap=0;
    
    printf("Please input the year like 1990: ");
    year=get_int();
    
    if(year%4==0&&year%100!=0||year%400==0)
        leap=1;
    
    if(leap)
        printf("%d 是闰年\n",year);
    else
        printf("%d 是平年\n",year);
}