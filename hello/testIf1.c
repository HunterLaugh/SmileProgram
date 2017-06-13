//  x[-1.0-0] y=x+1
//  x[0.0-1.0] y=-x+1

#include<stdio.h>

int isBetween(float);

void main(void) {
    float x,y;
    
    do {
        printf("Please input x between [-1.0-1.0].\n");
        scanf("%f",&x);
    } while(isBetween(x));
    
    if(x<0)
        y=x+1;
    else
        y=-x+1;
        
    printf("x: %.1f\ny: %.1f\n",x,y);
    
}

int isBetween(float num) {
    if(num<-1.0||num>1.0)
        return 1;
    else 
        return 0;
}