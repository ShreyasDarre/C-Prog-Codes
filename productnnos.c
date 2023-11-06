void main()
{
    int N,p=1,i;
    printf("Enter N");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
        p=p*i;
    printf("The product is %d",p);
}
