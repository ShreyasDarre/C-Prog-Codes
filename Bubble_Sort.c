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
    }

    Bubble_sort(arr,N);
    printf("The new array after sorting is: \n");
    for(i=0;i<=N-1;i++)
    {
        printf("%d\t",arr[i]);
        printf("\n");
    }

    selection_sort(arr,N);
    printf("The new array after selection sorting is: \n");
    for(i=0;i<=N-1;i++)
    {
        printf("%d\t",arr[i]);
        printf("\n");
    }

}



void Bubble_sort(int arr[],int n)
{
    int i,j,temp;

    for(j = 1; j<=n; j++)
    {
        for(i=0;i<=n-1-j;i++)
        {
            if(arr[i]>arr[i+1])
            {
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
    }
}


void selection_sort(int arr[],int n)
{
    int i,j,temp,min;

    for(i=0;i<n-1;i++)
    {
        min = arr[i];
        for(j=i+1;j<n;j++)
        {
            if(arr[j+1]<min)
            {
                min = arr[j+1];
            }
            if(min!=arr[i])
            {

                temp=arr[i];
                arr[i]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
