#include<stdio.h>

void Bubble_sort(int arr[],int N);
int main()
{
    int i,N;

    printf("Enter the number of elements in array: \n");
    scanf("%d",&N);

    int arr[N];
    printf("Enter the array: \n");
    for(i=0;i<=N-1;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Elements of array are: \n");
    for(i=0;i<=N-1;i++)
    {
        printf("%d\t",arr[i]);
        printf("\n");
    }

    Bubble_sort(arr,N);
    printf("The new array  after sorting is: \n");
    for(i=0;i<=N-1;i++)
    {
        printf("%d\t",arr[i]);
    }

}



void Bubble_sort(int arr[],int n)
{
    int i,round,temp;

    for(round = 1; round<=n; round++)
    {
        int flag=0;
        for(i=0;i<=n-1-round;i++)
        {
            if(arr[i]>arr[i+1])
            {
                flag =1;
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        if(flag==0)
        {
            printf("Round %d\n",round);
        }
            return;
    }
}

