void main()
{
    int A[3][3],B[3][3],C[3][3],i,j;

    printf("Enter 9 numbers for first matrix");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&A[i][j]);
        printf("Enter 9 numbers for second matrix");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&B[i][j]);
        printf("Prroduct of matrix");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
        {
            C[i][j]=A[i][j] * B[i][j];
            printf("%d\n",C[i][j]);
        }
    printf("\n");
}
