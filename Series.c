void main()
{
    int n,N,s,i,sum=0;
    printf("Enter a natural number");
    scanf("%d",&N);

    for(n=1;n<=N;n++)
    {
        s=0;
        for(i=1;i<=n;i++)
        {
            s=s+i;
        }
        sum=sum+s;
    }
    printf("Sum is %d",sum);
}
