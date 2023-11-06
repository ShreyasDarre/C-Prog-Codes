/*#include <stdio.h>

char *reverse(char *);
int length(char *);

int main() {
    char str[] = "Computer";  // Copy the string into a modifiable array

    printf("Original string: %s\n", str);
    printf("Length of the string: %d\n", length(str));

    char *reversed = reverse(str);
    printf("Reversed string: %s\n", reversed);

    return 0;
}

int length(char *p) {
    int i;
    for (i = 0; *(p + i) != '\0'; i++);
    return i;
}

char *reverse(char *p) {
    int l, i;
    char t;
    for (l = 0; *(p + l) != '\0'; l++);
    for (i = 0; i < l / 2; i++) {
        t = *(p + i);
        *(p + i) = *(p + l - 1 - i);
        *(p + l - 1 - i) = t;
    }
    return p;  // Return the reversed string
}
*/




#include<stdio.h>

int length(char*);
char* reverse(char*);

int length(char *p)
{
    int i;
    for(i=0;*(p+i)!='\0';i++);
    return i;
}

char* reverse(char *p)
{
    int l,i;
    char t;
    l = length(p);
    for(i=0;i<l/2;i++)
    {
        t = *(p+i);
        *(p+i) = *(p+l-i-1);
        *(p+l-i-1)=t;
    }
    return(p);
}

int main()
{
    int x;
    char word[10],*y;
    printf("Enter string\n");
    gets(word);

    x = length(word);
    printf("Length of the string: %d\n", x);

    y = reverse(word);
    printf("Reversed string: %s\n", y);
}
