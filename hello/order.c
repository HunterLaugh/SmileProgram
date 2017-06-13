// a,b,c  从大到小输出

#include<stdio.h>

void main(void) {
    int a,b,c;
    int temp;   
    
    printf("Pls input three integer: ");
    scanf("%d%d%d",&a,&b,&c);
    
    if(a<b) { temp=a;a=b;b=temp; }
    if(a<c) { temp=a;a=c;c=temp; }
    if(b<c) { temp=b;b=c;c=temp; }
    
    printf("a,b,c big to small order: %d %d %d\n",a,b,c);
}