#include<stdio.h>

int main()
{
    int a,b,count =0;
    printf("Enter 2 no's\n");
    scanf("%d%d",&a,&b);
    int a1 = a, a2 = b;
    int x1,x2,y1,y2,z1,z2;

    x1 = a/100;
    x2 = b/100;
    a = a -100*x1;
    b = b -100*x2;

    y1 = a/10;
    y2 = b/10;
    a = a -10*y1;
    b = b -10*y2;

    z1 = a;
    z2 = b;

    if(a1>a2)
    {
        if(x1>x2)
        {

        }
        else
        {
            count++;
        }
        if(y1>y2)
        {

        }
        else
        {
            count++;
        }
        if(z1>z2)
        {

        }
        else
        {
            count++;
        }
    }
    else
    {
        count=0;
    }
    if(count!=0)
    {
        printf("%d\n",count);
    }
    else
    {
        printf("Not possible\n");
    }
}
