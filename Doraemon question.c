#include<stdio.h>

int main()
{
    int i,j,k,arr1[10],arr2[10],arr3[100]={0};
    printf("1\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("2\n");
    for(int j=0;j<7;j++)
    {
        scanf("%d",&arr2[j]);
    }
    for(i=0;i<10;i++)
    {
        for(j=0;j<7;j++)
        {
            if(arr1[i]==arr2[j])
            {
                arr3[i]=arr1[i];
            }
        }
    }
    int n = sizeof(arr3)/sizeof(arr3[0]);
    int temp;
    for(k=0;k<n;k++)
    {
        for(j=0;j<=n-k-1;j++)
        {
            arr3[j]= temp;
            arr3[j]=arr3[j+1];
            arr3[j+1]=temp;
        }
    }
    for(k=0;k<n;k++)
    {
        if(arr3[k]!=0)
        {
            printf("%d ",arr3[k]);
        }
    }
}
