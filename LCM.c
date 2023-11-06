/*void main()
{
    int a,b,L;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    for(L=a>b?a:b;L<=a*b;L=L+(a>b?a:b))
        if(L%a==0 && L%b==0)
            break;

    printf("LCM is: %d",L);
}
*/
/*
void main()
{
    int a,b,L;
    printf("Enter 2 no's: ");
    scanf("%d%d",&a,&b);
    for(L = a>b?a:b ; L<=a*b ; L++)
    {
        if(L%a==0 && L%b==0)
            break;
    }
    printf("LCM is: %d",L);
}
*/
int main()
{
    int a,b,L;
    printf("Enter 2 no's\n");
    scanf("%d%d",&a,&b);
    for(L = a>b?a:b ; L<a*b;L++)
    {
        if(L%a==0 && L%b==0)
            break;
    }
    printf("LCM is %d",L);
}
