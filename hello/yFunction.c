// x [-10,0] y=x+10
// x [0,10] y=2x
// x [10,-] y=x*x

#include<stdio.h>

void main(void) {
    int x,y;
    
    printf("Please input x:");
    scanf("%d",&x);
    
    if(x>=-10&&x<0)
        y=x+10;
    else {
        if(x>=0&&x<10)
            y=2*x;
        else
            if(x>=10) 
                y=x*x;
            else {
                printf("error.\n");
                return;
            }
    }
    
    printf("when x is %d ,y is %d \n",x,y);
}