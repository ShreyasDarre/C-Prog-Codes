/*
void main()
{
    int x,n,f=1;
    printf("Enter the number: ");
    scanf("%d",&n);
    x=n;
    while(n>=1)
    {
        f=f*n;
        n--;
    }

    printf("Factorial of %d is %d",x,f);

}

*/


int main()
{
    int num,temp,fact=1;
    printf("Enter number\n");
    scanf("%d",&num);
    temp = num;
    while(num>=1)
    {
        fact = fact*num;
        num--;
    }
    printf("Factorial of %d is %d",temp,fact);
}
