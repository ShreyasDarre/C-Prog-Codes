#include<stdio.h>

int main()
{
    int arra[10]={10,15,20,25,30,35,40,45,50,55};
    int i=0,n,flag;

    printf("Enter required number: \n");
    scanf("%d",&n);
    for(i=0;i<10;i++)
    {
        if(arra[i]==n)
        {
            flag =1;
            break;
        }
    }
    if(flag==1)
        printf("The number %d is found at: %d",n,i);
    else
        printf("Number not in array");
}
