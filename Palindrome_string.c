#include<stdio.h>
#include<string.h>

int main()
{
    char s[100],rev[100];
    int flag;
    printf("Enter a string\n");
    scanf("%s",s);

    strcpy(rev,s);
    strrev(rev);

    flag = strcmp(s,rev);
    if(flag==0)
        printf("Palindrome");
    else
        printf("Not a palindrome");
}
