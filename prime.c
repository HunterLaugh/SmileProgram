#include<stdio.h>
#define N 50

main() {
    int primes[N];
    int pc,m,k;
    
    system("clear");
    printf("\n The first %d prime numbers are: \n",N);
    primes[0]=2;
    pc=1;
    m=3;
    
    while(pc<N) {
        k=0;
        while(primes[k]*primes[k]<=m) {
          if(m%primes[k]==0) {
                m+=2;
                k=1;
          }
          else
                k++;
        }

        primes[pc++]=m;
        m+=2;
    }
    
    for(k=0;k<pc;k++)
        printf("%4d",primes[k]);
    printf("\n\n Press any key to quit...\n");
}