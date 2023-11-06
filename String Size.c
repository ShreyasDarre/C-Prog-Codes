#include<stdio.h>

int main()
{
    int i=0,count =0;
    char text[100];

    printf("Enter text: \n");
    gets(text);
    /*
    for(i=0;text[i]!='\0';i++)
    {
        count++;
    }

    printf("The length of %s is: %d\n",text,count);
    */

    /*
while(text[i]!='\0')
    {
        count++;
        i++;
    }

    printf("The length of %s is: %d\n",text,count);
*/


    char * str = text; /* Declare pointer that points to text */
    /* Iterate though last element of the string */
    while(*(str++) != '\0')
        count++;

    printf("Length of '%s' = %d", text, count);
}
