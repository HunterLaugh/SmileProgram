// 数组4*4
int Array_2048[4][4]={0};

//打印数组
void ptArray_2048(void);

// print line with ---
void ptLine(void);

// justice is game over
int game_over(void);

// user move up down right or left
char get_move(void);

// play the game 2048
void play();

//上下左右移动方法
void moveUp(void);
void moveDown(void);
void moveLeft(void);
void moveRight(void);

#include<stdio.h>

void main(void) {
    ptArray_2048();
    get_move();
}

void ptArray_2048(void) {
    int i,j;
    
    ptLine();
    for(i=0;i<4;i++) {
        for(j=0;j<4;j++)
            printf("|%4d    ",Array_2048[i][j]);
            printf("|\n");
            ptLine();
    }
}

void ptLine(void) {
    printf("--------------------------------------\n");
}

char get_move(void) {
    char ch;
    char other;

//只取第一个字符　其它丢弃    
    while(scanf("%c",&ch)!=1)
        other=getchar();
    
//    printf("%c\n",ch);
    return ch;
    
}

void play() {
    int x,y,i,new_x,new_y,temp;
    int old_empty,move;
    char ch;
    
    while(1) {
        move=0;
        old_empty=empty;
        ch=getchar();
        
        switch(ch) {
            case 97:    //左移 a
            case 104    //h
            case 68:    //左移方向键
                for(y=0;y<4;y++) 
                    for(x=0;x<4;) {
                        if(a[y][x]==0) {
                            x++;
                            continue;
                        }
                        else {
                            for(i=x+1;i<4;i++) {
                                if(a[y][i]==0) {
                                    continue;
                                }
                                else {
                                    if(a[y][x]==a[y][i]) {
                                        a[y][x]+=a[y][i];
                                        a[y][i]=0;
                                        empty++;
                                        break;
                                    }
                                    else {
                                        break;
                                    }
                                }
                            }
                            x=i;
                        }
                    }
                for(y=0;y<4;y++) 
                    for(x=0;x<4;x++) {
                        if(a[y][x]==0) {
                            continue;
                        }
                        else {
                            for(i=x;(i>0)&&((a[y][i-1]==0));i--) {
                                a[y][i-1]=a[y][i];
                                a[y][i]=0;
                                move=1;
                            }
                        }
                    }
                break;
        }
    }
}
