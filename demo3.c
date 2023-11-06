/*#include <stdio.h>

int main() {
    float f = 0.1;
    double d = 0.1;

    printf("float f: %.20f\n", f);
    printf("double d: %.20f\n", d);

    return 0;
}

*/

#include<stdio.h>

int main()
{
    int num,z,msb;
    scanf("%d",&num);
    z=sizeof(num)*8;
    msb = 1 << (z-1);

    if(num & msb)
    {
        printf("Entered number %d has value is 1",num);
    }
    else
    {
        printf("Entered number %d has value of 0",num);
    }
    return 0;
}
