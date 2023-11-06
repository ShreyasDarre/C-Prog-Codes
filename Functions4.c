//Takes nothing: When you mention it in main fn
//returns something : using return we can only return 1 value

#include<stdio.h>
#include<stdio.h>
int add(void);

void main()
{
    int s;
    s=add();
    printf("Sum is %d",s);
}

int add()
{
    int a,b,c;
    printf("Enter 2 nos");
    scanf("%d%d",&a,&b);
    c=a+b;
    return(c);
}

