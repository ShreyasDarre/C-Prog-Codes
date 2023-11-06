#include<stdio.h>

int main()
{
    int arra[9]={10,20,30,40,50,60,70,80,90};
    int t;
    for(int i=0;i<4;i++)
    {
        t = arra[i];
        arra[i]=arra[8-i];
        arra[8-i]=t;
    }

    for(int i=0;i<9;i++)
    {
        printf("%d\t",arra[i]);
    }
}
