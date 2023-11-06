long fact(int n)
{
    if(n>0)
        return(n*fact(n-1));
    else
        return(1);
}

void main()
{
    int n;
    printf("Enter n");
    scanf("%d",&n);
    printf("Factorial of %d is %ld",n,fact(n));
}
