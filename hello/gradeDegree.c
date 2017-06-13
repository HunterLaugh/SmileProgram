// 100 score ;100- 90- 80- 70- 60- 0----A  B  C  D  E

#include<stdio.h>

int get_int(void);

void main(void) {
    int score;
   
    do {
        printf("Pls input a integer between 0-100.\n");
        score=get_int();
    } while(!(score>=0&&score<=100));
  
    switch(score/10) {
        case 10:
        case 9: printf("A\n"); break;
        case 8: printf("B\n"); break;
        case 7: printf("C\n"); break;
        case 6: printf("D\n"); break;
        default: printf("E\n"); break;
    }
}


int get_int(void) {
    int num;
    char ch;
    
    while(scanf("%d",&num)!=1) {
        while(ch=getchar()!='\n')
            putchar(ch);
        printf(" is not an integer.\n");
        printf("Pls input an integer: ");
    }
    
    return num;
}