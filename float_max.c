/* two floas who is the bigger ? */
#include<stdio.h>
void main(void) {
    float x,y,c;
    printf("Please input x and y: \n");
    scanf("%f%f",&x,&y);
    c=x>y?x:y;
    printf("Max of(%f,%f) is %f \n",x,y,c);
}
