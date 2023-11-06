void main()
{
    int a,b,x,y,m,G;
    printf("Enter 2 no's: ");
    scanf("%d%d",&a,&b);
    x=a>b?a:b;
    y=a<b?a:b;
    m=x%y;
    G=y%m;
    if(G==0)
        printf("GCD of %d and %d is %d.",a,b,G);

}
