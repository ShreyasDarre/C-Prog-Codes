#include<stdio.h>

char palindrome(char x[]);

int main()
{
    int i,j,size,count;
    char s[100],x[100];

    printf("Enter a string: \n");
    for(i=0;s[i]!='\0';i++)
    {
        scanf("%c",&s[i]);
    }
    palindrome(s);
    size = i/2;
    for(j=0;j<size;j++)
    {
        if(x[j]=s[j])
        {
            count++;
        }
    }
    printf("i=%d\n",i);
    printf("size=%d\n",size);

}

char palindrome(char x[])
{
    int i,j;
    char t;
    for(i=0;x[i]!='\0';i++);
    int size = i/2;
    for(j=0;j<size;j++)
    {
        t=x[j];
        x[j]=x[size-j-1];
        x[size-j-1]=t;
    }
}
