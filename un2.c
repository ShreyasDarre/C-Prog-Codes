#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter 3 numbers");
    scanf("%d%d%d",&a,&b,&c);
    a>b ? a>c?a:c : b>c?b:c ;
    printf("The greatest number among the 3 numbers is: %d", a>b ? a>c?a:c : b>c?b:c );
}
