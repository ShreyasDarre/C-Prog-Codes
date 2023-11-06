/*void main()
{
    int a,b,H;
    printf("Enter 2 no's: ");
    scanf("%d%d",&a,&b);
    for(H=a<b?a:b; H>=1;H--)
    {
        if(a%H==0&&b%H==0)
            break;
    }
    printf("HCF is %d",H);
}
*/
void main()
{
    int a,b,H;
    printf("Enter 2 no's: ");
    scanf("%d%d",&a,&b);
    for(H=a<b?a:b ; H>=1; H--)
        if(a%H==0&&b%H==0)
        break;
    printf("HCF is %d",H);
}
