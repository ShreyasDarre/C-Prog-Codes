#include <stdio.h>
#include <string.h>

void moveHashToFront(char *s);

int main() {
    char s[100];
    printf("Enter a string: ");
    gets(s);
    printf("Original string: %s\n", s);
    moveHashToFront(s);
    return 0;
}

void moveHashToFront(char *s)
{
    static char s1[20],s2[20];
    int len = strlen(s);
    int j = 0,k=0;

    for (int i = 0; i < len; i++)
    {
        if (s[i] == '#')
        {
            s1[j] = s[i];
            j++;
        }
        else
        {
            s2[k] = s[i];
            k++;
        }
    }
    s1[j]='\0';
    s2[k]='\0';

    strcat(s1,s2);
    printf("Modified string: %s\n", s1);
}
