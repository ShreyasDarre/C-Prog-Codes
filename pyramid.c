#include<stdio.h>

int main()
{
    int n,k;
    scanf("%d",&n);

    for(int i=0;i<n;i++,k=0)
    {
        for(int j=0;j<=n-i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
