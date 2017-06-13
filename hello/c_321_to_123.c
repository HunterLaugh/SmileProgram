//  4321-->1234 逆序输出

#include<stdio.h>

void main(void) {
    int a,b,c,d;
    int num;
    int changeNum;
    do {
        printf("Please input a integer between 1000-9999,Your number: ");
    } while(!((scanf("%d",&num)==1)&&(num>=1000)&&(num<10000)));
    
    a=num/1000;
    b=(num-a*1000)/100;
    c=(num-a*1000-b*100)/10;
    d=num%10;
    
    changeNum=d*1000+c*100+b*10+a;
    
    printf("num is %d\n",num);
    printf("change num like 1234 to 4321, so the num %d change to %d\n",num,changeNum);
}