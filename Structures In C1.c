struct date
{
    int d,m,y;
};

void main()
{
    struct date today,d1;
    today.d = 23;
    today.m = 3;
    today.y = 1995;

    d1 = today;

    printf("Enter today's date in dd/mm/yyyy\n");
    scanf("%d/%d/%d",&d1.d,&d1.m,&d1.y);
    printf("Date: %d/%d/%d",d1.d,d1.m,d1.y);
}
