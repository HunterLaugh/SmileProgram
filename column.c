#include<stdio.h>
#define ROW 3
#define COL 4

void main() {
    int matrixA[ROW][COL],matrixB[COL][ROW];
    int i,j;
    
    system("clear");
    printf("Enter elements of the matrixA,\n ");
    printf("%d*%d\n",ROW,COL);
    for(i=0;i<ROW;i++) {
        for(j=0;j<COL;j++) {
            scanf("%d",&matrixA[i][j]);
        }
    }
    
    printf("\n matrixA %d*%d\n",ROW,COL);
    for(i=0;i<ROW;i++) {
        for(j=0;j<COL;j++) {
            printf("%8d",matrixA[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
    
    
    for(i=0;i<ROW;i++) {
        for(j=0;j<COL;j++) {
            matrixB[j][i]=matrixA[i][j];
        }
    }
    
    printf("matrixB,");
    printf("%d*%d \n",COL,ROW);
    for(i=0;i<COL;i++) {
        for(j=0;j<ROW;j++) {
            printf("%8d",matrixB[i][j]);
        }
        printf("\n");
    }
    printf("\n Press any key to quit....\n");
}