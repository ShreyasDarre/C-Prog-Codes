#include<stdio.h>

int main()
{
    int num = 10;
    int *ptr;

    ptr=&num;

    //&num gives address of num
    //num gives value of num
    //ptr gives address of num
    //&ptr gives address of ptr
    //*ptr gives value pointed by the ptr

    //Aithmetic operations

    int a=10,b=20;
    int *ptr1,*ptr2;
    ptr1 = &a;
    ptr2 = &b;

    printf("a: %d\n",*ptr1);
    printf("b: %d\n",*ptr2);
    printf("a+b: %d\n",*ptr1+*ptr2);
    printf("a-b: %d\n",*ptr1-*ptr2);

    //Swap

    int t;
    t=*ptr1;
    *ptr1=*ptr2;
    *ptr2=t;

    printf("new a: %d\n",*ptr1);
    printf("new b: %d\n",*ptr2);


    //Access array using pointers
    /*
    int arr[5];
    int i;
    int *ptr3=arr;

    printf("Enter the array: \n");
    for(i=0;i<5;i++)
    {
        scanf("%d",ptr3);
        ptr3++;
    }

    ptr3 =arr;
    printf("array elements\n");

    for(i=0;i<5;i++)
    {
        printf("%d\t",*ptr3);
        ptr3++;
    }
    */

    //Best approach

    int arr1[5];
    int *ptr4=arr1;

    printf("Enter the array elements: \n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",(ptr+i));
    }

    printf("Array Elements: \n");
    for(int i=0;i<5;i++)
    {
        printf("%d\n",*(ptr+i));
    }

}
