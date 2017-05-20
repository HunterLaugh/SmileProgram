// menuette.c    menu  checking

#include<stdio.h>

int get_int(void);
char get_choice(void);
char get_first(void);
void show_menu(void);

void count(void);

int main(void) {
	char choice;

	count();
	while((choice=get_choice())!='q') {
		{
			switch(choice) {
				case 'a':
					printf("Advice \n");
					break;
				case 'b':
					printf("Bye low, sale hig! \n");
					break;
				case 'c':
					count();
					printf("You select c ,ha ha !\n");
					break;
				default:
					printf("Program error.\n");
					break;
			}
		}

	}
	return 0;
}

int get_int(void) {
	int input;
	char ch;

	printf("Please input a number: \n");
	while(scanf("%d",&input)!=1) {
		while((ch=getchar())!='\n')
			putchar(ch);
		printf(" is not integer, Please input integer like -13,92,117.\n");
	}
	return input;
}

char get_choice(void) {
	char choice;
	char ch;

	show_menu();
	choice=get_first();
	while((choice<'a'||choice>'c')&&choice!='q') {
			show_menu();
			printf("I'm a dick.\n");
			choice=get_first();
	}
	return choice;
}

char get_first(void) {
	char ch;

	ch=getchar();
	while(getchar()!='\n')
		continue;

	return ch;
}

void count(void) {
	int input;
	int i;

	input=get_int();
	for(i=0; i<input; i++)
		printf("%d\n",i+1);
}

void show_menu(void) {
	printf("\nPlease input your choice !\n");
	printf("a: advice        b: bell\n");
	printf("c: count         q: quit\n");
}

