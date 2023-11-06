void main()
{
    int p=1,i,x,y;
    printf("Enter the x and y: ");
    scanf("%d%d",&x,&y);
    for(i=1;i<=y;i++)
        p=p*x;
    printf("Result is %d",p);
}
