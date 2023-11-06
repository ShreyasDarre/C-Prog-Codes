#include<stdio.h>
#include<string.h>
int main()
{
    int a;
    char s[10],x;
    gets(s);
    scanf("%c",&x);
    int len = strlen(s);
    for(int i=0;i<len;i++)
    {
        if(s[i]==x)
        {
            if((int)s[i]>96)
            {
                s[i]=s[i]-32;
            }
            else
            {
                s[i]=s[i]+32;
            }
        }
    }
    puts(s);
}
