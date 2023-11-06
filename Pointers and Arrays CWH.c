#include<stdio.h>

int main()
{
    /*
    int a=34;
    int b = sizeof(a);

    char c = '3';

    printf("%d\n",b);
    int *ptra = &a;
    int *ptrc = &c;
    printf("%d\n",ptra);
    printf("%d\n",ptra+1);
    printf("%d\n",ptrc);
    printf("%d",ptrc+1);
    return 0;

    */


    int arr[] = {1,2,3,4,5,6,7};
    printf("The value at position 1 is %d\n",arr[0]);
    printf("The address at position 1 is %d\n",&arr[0]);
    printf("The address at position 1 is %d\n",arr);
    printf("The address at position 2 is %d\n",&arr[1]);
    printf("The address at position 2 is %d\n",arr+1);


    printf("The value at address at position 1 is %d\n",*&arr[0]);
    printf("The value at address at position 1 is %d\n",*arr);
    printf("The value at address at position 2 is %d\n",*&arr[1]);
    printf("The value at address at position 2 is %d\n",*(arr+1));
}
