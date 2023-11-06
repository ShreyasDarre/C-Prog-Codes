#include<stdio.h>

int main()
{
    char str1[100],str2[100];
    char *s1 = str1;
    char *s2 = str2;

    printf("Enter 1st string\n");
    gets(str1);
    printf("Enter 2nd string\n");
    gets(str2);

    while(*(++s1));

    while(*(s1++)=*(s2++));
    printf("Concatenated string: %s ",str1);
}
