void main()
{
    add();
    add();
    even();
}
add()
{
    int a,b;
    printf("Enter 2 no's:\n");
    scanf("%d%d",&a,&b);
    printf("Sum of no's is: %d\n",a+b);
}

even()
{
    int a;
    printf("Enter the number:\n");
    scanf("%d",&a);
    if(a%2==0)
        printf("%d number is even.",a);
    else
        printf("%d number is odd.",a);
}
