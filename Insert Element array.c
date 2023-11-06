#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    int arr[MAX_SIZE];
    int i,size,num,pos;


    printf("Enter size of the array\n");
    scanf("%d",&size);

    printf("Enter elements in array\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter element to insert: \n");
    scanf("%d",&num);
    printf("%Enter element position\n");
    scanf("%d",&pos);

    if(pos>size+1 || pos<=0)
        printf("Invalid\n");
    else
    {
        for(i=size;i>=pos;i--)
            arr[i]=arr[i-1];
    }
}
