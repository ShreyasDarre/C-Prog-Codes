void main()
{
    int a,b,x,y,m,G; //Take a and b inputs.
    printf("Enter 2 no's: ");
    scanf("%d%d",&a,&b);
    x=a>b?a:b;//assign x as the greatest number.
    y=a<b?a:b;//assign y as the least number.
    m=x%y;//G should be equal to -
    G=y%m;
    if(G==1)
        printf("Numbers %d and %d are co-prime.",a,b);
    else
        printf("Numbers %d and %d are not co-prime.",a,b);
}

