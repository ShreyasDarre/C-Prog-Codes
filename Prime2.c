void main()
{
    int i,x;
    printf("Enter number: ");
    scanf("%d",&x);
    for(i=2;i<=x-1;i++)
    {
        if(x%i==0)
        {
            break;
        }
    }
    if(i==x)
        printf("Entered number %d is prime",x);
    else
        printf("%d is not prime",x);
}
