void main()
{
    int i=0,x,n,s=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    while(n!=0)
    {
        x=n%10;
        i++;
        n=n/10;
        s=s+x;
    }
    printf("The no of digits is: %d",i);
    printf("The sum of digits is: %d",s);
}
