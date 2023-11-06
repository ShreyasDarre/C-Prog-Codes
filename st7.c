#include<stdio.h>
/*

*****
*   *
*   *.
*   *
*****

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
            if(i==1 || i == n)
            {
                printf("*");
                //printf("%c",'A'+j-1);
            }
            else if(i>1 && i<n)
            {
                if(j==1 || j==n)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}




