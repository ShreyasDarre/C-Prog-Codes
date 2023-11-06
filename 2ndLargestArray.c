#include<stdio.h>
#include<limits.h>

#define MAX  1000

int main()
{
    int arr[MAX],size,i;
    int max1,max2;

    //Input
    printf("Enter size of the array(1-1000): \n");
    scanf("%d",&size);

    //Input array
    printf("Enter elements in an array: \n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    max1 = max2 = INT_MIN; //INT_MIN is a minimum value of the int variable

    for(i=0;i<size;i++)
    {
        if(arr[i]>max1)
        {
            max2=max1;
            max1=arr[i];
        }
        else if(arr[i] > max2 && arr[i] < max1)
        {
            max2 = arr[i];
        }
    }

    printf("The 1st largest value is: %d\n", max1);
    printf("Second largest value is %d\n",max2);

    return 0;
}
