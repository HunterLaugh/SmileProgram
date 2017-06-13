// call time  x ,money y ,min y ;
// scheme 1  [0,100] 50 ,[100,-] 1*(x-100) , y max 200
// scheme 2  [0,100] 50 ,[100,-] 0,85*(x-100) ,
// scheme 3  0.75*x

#include<stdio.h>

void minxmum(float a,float b,float c);
float scheme1(float x);
float scheme2(float x);
float scheme3(float x);

void main(void) {
    int x=0;
    float min=0;

    do {
        printf("Please input call phone minutes x>0,x: ");
        scanf("%d",&x);
    } while(x<0);
    
    minxmum(scheme1(x),scheme2(x),scheme3(x));
}

//方案1
float scheme1(float x) {
    float y1=0;
    
    if(x<100||x==100)
        y1=50;
    else {
        if(x>100) 
            y1=50+(x-100);
    }
    if(y1>200)
        y1=200;
    
    return y1;
}

//方案2
float scheme2(float x) {
      float y2=0;
    
    if(x<100||x==100)
        y2=50;
    else {
        if(x>100) 
            y2=50+0.85*(x-100);
    }

    return y2;
}

//方案3
float scheme3(float x) {
    float y3=0;
    
    y3=0.75*x;
    return y3;
}

//最小的值与方案
void minxmum(float y1,float y2,float y3) {
    if((y1==y2)&&(y3<y1))
        printf("scheme3 is the best scheme , cost money is: %.1f\n",y3);
    else {
        if((y1==y2)&&(y3>y1))
            printf("scheme1 or scheme 2 are the best scheme , cost money is: %.1f\n",y1); 
        else {
            if((y1<y2)&&(y1<y3))
                printf("scheme1 is the best scheme , cost money is: %.1f\n",y1);   
            else {
                if((y2<y1)&&(y2<y3))
                    printf("scheme2 is the best scheme , cost money is: %.1f\n",y2); 
                else
                    printf("scheme3 is the best scheme ,cost money is: %.1f\n",y3);
            }
        }
    }
}