#include <stdio.h>

int main()
{
    int num,x,i,bit_size;

    printf("Enter decimal number ");
    scanf("%d",&num);
    bit_size = sizeof(num)*8;

    for(i=bit_size-1;i>=0;i--)
    {
        x = (num>>i) & 1;
        printf("%d",x);
    }
}
