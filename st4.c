#include<stdio.h>
/*

*****
****
***
**
*

*/
int main()
{
    int i,j,n;
    printf("Enter number of rows:\n");
    scanf("%d",&n);
    for(i = 1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j<=n-i+1)
            {
                printf("*");
                //printf("%c",'A'+j-1);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}


