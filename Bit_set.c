#include<stdio.h>

int main()
{
    int num,n,new_num,z,shift;
    printf("Enter number:\n");
    scanf("%d",&num);
    printf("Enter place to set(0-31):\n");
    scanf("%d",&n);
    printf("Enter bit status:\n");
    scanf("%d",&z);

    shift = ~(1<<n) & num;
    new_num = shift | (z<<n);
    printf("New number is %d",new_num);
    return 0;
}
