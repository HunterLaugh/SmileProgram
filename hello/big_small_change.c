// 输入字符，大写－》小写，小写－》大写，其它字符不变

#include<stdio.h>

void main(void) {
    char c;
    int a,b;
    
    printf("Please input a char: ");
    a=scanf("%c",&c);
    if(c>='A'&&c<='Z')
        c=c+32;
    else 
        if(c>='a'&&c<='z')
            c=c-32;
    
    printf("%c\n",c);
    printf("a:%d scanf function return.\n ",a);
    printf("%d 'a'-'A'\n",'a'-'A');
}