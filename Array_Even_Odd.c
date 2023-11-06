void main()
{
    int a[10],i,se=0,so=0;
    printf("Enter 10 numbers: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        if(a[i]%2==0)
            se=se+a[i];
        else
            so=so+a[i];
    }
    printf("Sum of even: %d",se);
    printf("Sum of odd : %d",so);
}
