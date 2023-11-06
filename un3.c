void main()
{
    int i=1,x;
    while(i<=5)
    {
        printf("Enter a number\n");
        scanf("%d",&x);
        printf("%d is the number you have entered\n",x);
        if(x>0)
            break;
        i++;
    }
    i==6?printf("Ends Normally"):printf("Applied Break");
}
