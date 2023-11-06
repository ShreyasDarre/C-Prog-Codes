#define LEFT 0 //shift
#define RIGHT 1

void main()
{
    int A[8]={10,20,30,40,50,60,70,80};
    display(A,8);
    rotate_array(A,8,RIGHT,3);
    display(A,8);
}

void display(int A[],int N)
{
    int i;
    printf("\n");
    for(i=0;i<N;i++)
    {
        printf("%d",A[i]);
    }
}
void rotate_array(int A[],int N,int dir,int shift_count)
{
    int i,temp;
    if(dir==RIGHT)
    {
        temp=A[N-1];
        while(shift_count)
        {
            for(i=N-1;i>=1;i--)
                A[i]=A[i-1];
            A[0]=temp;
            shift_count--;
        }
    }

    else{
        temp = A[0];
        while(shift_count)
        {
            for(i=0;i<=N-2;i++)
                A[i]=A[i+1];
            A[N-1]=temp;
            shift_count--;
        }
    }
}
