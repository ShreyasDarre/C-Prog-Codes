#include<stdio.h>

void scan(int t[10][10], int x, int y);

int main()
{
    int m,n;
    printf("Enter m and n values of mxn matrix needed:\n");
    scanf("%d %d",&m,&n);

    int A[m][n],B[m][n],C[m][n];
    printf("Enter the matrix elements of A: \n");
    scan(A,m,n);
    printf("Enter the matrix elements of B: \n");
    scan(B,m,n);

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            C[i][j]=A[i][j]+B[i][j];
        }
    }

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d\t",C[i][j]);
        }
        printf("\n");
    }

}

void scan(int t[10][10], int x, int y)
{
    int i,j;
    for(i=0;i<x;i++)
        {
            for(j=0;j<y;j++)
            {
                scanf("%d", &t[i][j]);
            }
        }
}
