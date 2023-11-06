void main()
{
    int x;
    int i=0;
    printf("Input Number: ");
    scanf("%d",&x);
    while(x!=0)
    {
        x=x/10;
        i++;
    }
    printf("The no of digits: %d",i);
}
