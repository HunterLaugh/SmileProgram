// zone arrow
// s/2 1s,s/2/2 1/2s

#include<stdio.h>
void main(void) {
    float sum,t;
    int time;

    for(time=1;time<=30;time++) {
        if(time==1)
            sum=t=1.0;
        else {
            t=t/2;
            sum=sum+t;
        }

        printf("%d time's sum is  %f\n",time,sum);
    }
    

}