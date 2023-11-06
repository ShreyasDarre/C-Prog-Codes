/*/void main()
{
    int f=0,s=1,t=0,i,n;
    printf("Enter number of terms");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        t=f+s;
        printf("%d\n",f);
        f=s;
        s=t;
    }
}
*/
int main()
{
    int f=0,s=1,t,num,i;
    printf("Enter number of terms\n");
    scanf("%d",&num);
    for(i=0;i<=num;i++)
    {
        t=f+s;
        printf("%d\n",f);
        f=s;
        s=t;
    }
}
