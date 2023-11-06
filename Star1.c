void main()
{
    int i,j,n;
    printf("Enter the number of rows x column in single no: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j<=i)
                printf("%d",j);
            else
                printf(" ");
        }
        printf("\n");
    }
}
