#include<stdio.h>

void main(void) {

// math M ; c program C ; English E; Physical  P.
	int M,C,E,P;
	printf("Please input the grades of math,c program,English,physical:\n");
	scanf("%d%d%d%d",&M,&C,&E,&P);
	printf("\n");

	int ave;
	ave=(M+C+E+P)/4;

	int max=M;
	if(max<C) 
	  max=C;
	if(max<E)
	  max=E;
	if(max<P)
      max=P;
	
	printf("The averege of math、c program、Englis、physical grades is: %d.\nThe max is %d.\n",ave,max);

	
}
