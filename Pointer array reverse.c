#include<stdio.h>

void printarray(int *x,int m);

int main()
{
    int size;
    printf("Enter array size:\n");
    scanf("%d",&size);


    int arr[size],t;
    int *ptr = arr;
    printf("Enter array elements:\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",(ptr+i));
    }

    printf("Entered array before reversing:\n");
    printarray(ptr,size);

    for(int i=0;i<size/2;i++)
    {
        t=*(ptr+i);
        *(ptr+i)=*(ptr+size-1-i);
        *(ptr+size-1-i)=t;
    }
    ptr=arr;

    printf("After reversing:\n");
    printarray(ptr,size);
}

void printarray(int *x,int m)
{
    for(int i=0;i<m;i++)
    {
        printf("%d\n",*(x+i));
    }
}
