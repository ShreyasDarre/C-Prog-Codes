#include<stdio.h>

int main()
{
    int rows;
    printf("Enter number of rows");
    scanf("%d",&rows);
    //Stars
    /*
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf("*");
        }
    printf("\n");
    */

    //Numbers
    /*
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf("%d",j+1);
        }
    printf("\n");
    */


    //Alphabets
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf("%c",'A'+j);
        }
    printf("\n");
    }
}
