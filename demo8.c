#include<stdio.h>

int main()
{
    int N;
    scanf("%d",&N);
    int arr[10000];
    int i=0;
int k=0;
    while(N)
    {
        arr[i]=N%10;
        N=N/10;
        i++;
    }
    int count[9]={0};
    for(int j=0;j<i;j++)
    {
        count[arr[j]]++;
    }
    for(int j=0;j<i;j++)
    {
        if(count[arr[j]>1])
        {
           k++;
        }

    }

    if(sizeof(arr)/sizeof(arr[0])==2)
    {
        printf("Yes");
    }
    else
        printf("No");
    /*if(k==2)
    {
        printf("Yes");
    }
    else
        printf("No");
*/
}
