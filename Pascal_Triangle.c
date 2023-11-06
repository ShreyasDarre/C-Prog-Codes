int fact(int);
int combi(int,int);
void printPascal(int);

int fact(int n)
{
    int f=1;
    while(n>=1)
    {
        f=f*n;
        n--;
    }
    return(f);
}

int combi(int n, int r)
{
    return(fact(n)/fact(n-r)/fact(r));
}

void printPascal(int line)
{
    int i,j,k;
    for(i-0;i<4;i++)
    {
        k=1;
        for(j=0;j<=7;j++)
        {

        }
    }
}
