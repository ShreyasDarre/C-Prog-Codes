#include<stdio.h>

int main()
{
    int a,b,x;
    printf("Enter 2 numbers\n");
    scanf("%d%d",&a,&b);
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("new_a=%d\n",a);
    printf("new_b=%d\n",b);

}
