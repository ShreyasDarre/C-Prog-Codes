#include<stdio.h>

void swap(int *x, int *y);

int main()
{
    int a,b;
    printf("Enter 2 numbers: \n");
    scanf("%d%d",&a,&b);
    printf("Values are a: %d and b : %d\n",a,b);
    swap(&a,&b);
    printf("Values are a: %d and b : %d\n",a,b);
}

void swap(int *x,int *y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
    /*
    printf("The new value of a is : ",x);
    printf("The new value of b is : ",y);
*/
}
