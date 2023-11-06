#include<stdio.h>

int main()
{
    int i,j;
    int rows;
    scanf("%d",&rows);
    /*
    for(i=0;i<rows;i++)
    {
        for(j=0;j<rows-i-1;j++)
        {
            printf(" ");
        }
        for(int k=0;k<=i;k++)
        {
        printf("*");
        }
        printf("\n");
    }
    */

    //Numbers

    for(i=0;i<rows;i++)
    {
        for(j=0;j<rows-i-1;j++)
        {
            printf(" ");
        }
        for(int k=0;k<=i;k++)
        {
        printf("%d",k+1);
        }
        printf("\n");
    }
}
