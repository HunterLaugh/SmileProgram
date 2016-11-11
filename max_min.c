/* matrix  max  min    */

#include<stdio.h>
#define MAXN 20
int a[MAXN][MAXN];

main() {
    int min,max;
    int row,col,n;
    system("clear");
    printf("Please input the order of the matrix: \n");
    scanf("%d",&n);
    printf("Please input the elements of the matrix,\n from a[0][0] to a[%d][%d]: \n",n-1,n-1);
    for(row=0;row<n;row++) 
        for(col=0;col<n;col++) 
            scanf("%d",&a[row][col]);
            
    for(row=0;row<n;row++) 
        for(col=0;col<n;col++) 
            printf("%8d",a[row][col]);
    
    printf("\n");
    
    for(min=a[0][0],row=0;row<n;row++) {
        for(max=a[row][0],col=1;col<n;col++) {
            if(max>a[row][col])         //min of the row
                max=a[row][col];
        }
        if(min>max)     //update  min
            min=max;
    }
    printf("The minimum of maximum number is %d \n",min);
    
        
    for(max=a[0][0],row=0;row<n;row++) {
        for(min=a[row][0],col=1;col<n;col++) {
            if(min<a[row][col])     //max of the row
                min=a[row][col];
        }
        if(max<min)     //update max
            max=min;
    }
    printf("The maximum of minimum number is %d \n",min);
    
}