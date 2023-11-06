#include<stdio.h>
int mult(int ,int);

int main()
{
    int s,x,y;
    printf("enter x,y");
    scanf("%d%d",&x,&y);
    s = mult(x,y);
    printf("Product is %d",s);
}

int mult(int a, int b)
{
    int c;
    c=a*b;
    return c;
}
