#include<stdio.h>
#include<string.h>

int main()
{
    char s[20];
    int l;
    printf("ENTER YOUR NAME");
    scanf("%s",&s);
    l=strlen(s);
    printf("Length of %s is %d",s,l);
}
