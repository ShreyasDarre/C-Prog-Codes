//Takes nothing: no printf()
//returns nothing. -use VOID in it.

main()
{
    add();
}
void add()
{
    int a,b,c;
    printf("Enter 2 no's: ");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("Sum is %d",c);
}
