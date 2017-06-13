// guess the number
// if big  replay big
// if small reply small

#include<stdio.h>

int getNum(void);

void main(void) {
    int thinkNum;
    int guessNum;
    int i;
    
    printf("Please input a number(0-100) think in your mind, other people will guess it.\n");
    thinkNum=getNum();
    printf("\n");

// 10 chances to guess the number
// if got, over
    for(i=0;i<10;i++) {
        printf("you have 10 chance to guess the right number,The %d chance.\n",i+1);
        guessNum=getNum();
        if(guessNum==thinkNum) {
            printf("\nWON winner!!!\nYou got the right thinkNum.\nThe thinkNum is %d.\n",thinkNum);
            break;
        } 
        else  {
            if(guessNum>thinkNum) 
                printf("It's big.\n");
            else
                printf("It's small.\n");
        }
    printf("\n");    
    }    

}

// get an int number between 0-100
int getNum(void) {
    int nNum;
    do {
        printf("Please input an int number between 0-100, like 1,3,... and so on: ");
    } while(!((scanf("%d",&nNum)==1)&&(nNum>0)&&(nNum<100)));
    
    return nNum;
}

