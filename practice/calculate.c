// + - * / %   num1 num2
// num1 num2  operation
// switch case

#include<stdio.h>

void main(void) {
    float num1=0.0;
    float num2=0.0;
    char operation=0;
    
    printf("\nEnter the calculation\n ");
    scanf("%f%c%f",&num1,&operation,&num2);
    
    switch(operation) {
        case '+':
            printf("=%f\n",num1+num2);
            break;
        case '-':
            printf("=%f\n",num1-num2);
            break;
        case '*':
            printf("=%f\n",num1*num2);
            break;
        case '/':
            if(num2==0)
                printf("error，num2 is zero \n");
            else
                printf("=%f\n",num1/num2);
            break;
        case '%':
            if((long)num2==0)
                printf("\n\n a devision by zero error\n");
            else
                printf("=%ld\n",(long)num1%(long)num2);
            break;
        default:
            printf("\n\naDevision by zero error!\n");
            break;
    }
}