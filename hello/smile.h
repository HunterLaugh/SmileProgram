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