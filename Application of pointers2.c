#include<stdio.h>

void input(int *p);
void display(int *p);
void sort(int *p);
int main()
{
    int a[5];
    input(a);
    printf("Input: \n");
    display(a);
    printf("Sorted result: \n");
    sort(a);
    display(a);
}

void input(int *p)
{
    int i;
    printf("Enter the array:\n");
    for(i=0;i<=4;i++)
        scanf("%d",p+i);
}

void display(int *p)
{
    int i;
    for(i=0;i<=4;i++)
        printf("%d\t",*(p+i));
    printf("\n");
}

void sort(int *p)
{
    int round,t,i;
    for(round=1;round<=4;round++)
    {
        for(i=0;i<=3;i++)
        {
            if(*(p+i)>*(p+i+1))
            {
                t = *(p+i);
                *(p+i)=*(p+i+1);
                *(p+i+1)=t;
            }
        }
    }
}

