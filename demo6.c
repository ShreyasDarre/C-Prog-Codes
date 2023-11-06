#include<stdio.h>

int main()
{

int x=0,temp,n;
printf("Enter n\n");
scanf("%d",&n);
int arr[n];
printf("Enter array\n");
for(int i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}

for(int i=0;i<n/2;i++)
{
    temp=arr[i];
    arr[i]=arr[n-i-1];
    arr[n-i-1]=temp;
}

for(int i=0;i<n;i++)
{
    printf("%d\t",arr[i]);
}
}
