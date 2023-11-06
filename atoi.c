#include<stdio.h>

int main()
{
    char s[7]="123:456";
    int n1,n2;

    sscanf(s,"%d:%d",&n1,&n2);
        printf("%03d\n",n1);
        printf("%03d\n",n2);

}
