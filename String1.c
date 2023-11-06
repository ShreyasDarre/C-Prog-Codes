void main()
{
    //char s[10]={'S','H','R','E','Y','A','S','\0',};
    //char s[20]="SHREYAS";
    char s[20];
    int i;
    printf("Enter your name: ");
    //scanf("%d",&s[0]);
    //Use gets instead of scanf
    gets(s);
    /*for(i=0;s[i]!='\0';i++)
    {
        printf("%c",s[i]);
        //puts(s); //cursor goes to new line.
    }
    */
    puts(&s[0]);
}
