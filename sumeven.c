void main()
{
    int N,s=0,i=2;
    printf("Enter the natural number:");
    scanf("%d",&N);
    while(i<=2*N)
    {
        s=s+i;
        i=i+2;
    }
    printf("Sum is %d",s);
}
