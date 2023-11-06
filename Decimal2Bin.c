#include<stdio.h>

int main()
{
    long long int dec,tempdec,bin=0;
    int rem=0,place=1;

    printf("Enter Decimal\n");
    scanf("%lld",&dec);
    tempdec=dec;

    while(tempdec)
    {
        rem = tempdec%2;
        bin = (rem*place) + bin;
        tempdec /= 2;
        place *= 10;
    }
    printf("decimal number is %lld", bin);
}
