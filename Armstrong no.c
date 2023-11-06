void main()
{
    /*Armstrong number is a number where the cube of the digits is equal to the number.
    for example we have 153 = 1^3 + 5^3 + 3^3; */
    int n,r,x,s;
    printf("Armstrong numbers are\n");
    for(n=1;n<=1000;n++)
    {
        s=0;
        x=n;
        while(x!=0)
        {
            r=x%10;
            s=s+r*r*r;
            x=x/10;
        }
        if(s==n)
        {
            printf("%d\n",n);
        }
    }
}
