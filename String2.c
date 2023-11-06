/*
strlen() = string length
strrev() = string reverse
strlwr() = upper to lower
strupr() = lower to upper
strcpy() = string copy          strcpy(s,"BHOPAL")
strcmp() = string compare       strcmp("AMAR","AMIT")
strcat() = string catenation    strcat(s,"STUDENT")
*/

void main()
{
    char s[3][10];
    int i;
    printf("Enter three strings");
    for(i=0;i<=2;i++)
        scanf("%s",&s[i][0]);
    for(i=0;i<=2;i++)
        printf("%s\n",s[i]);
}
