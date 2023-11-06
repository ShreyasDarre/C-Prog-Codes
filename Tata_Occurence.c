// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int N;
    scanf("%d",&N);
    int arr[10];
    int cnt[10]={0};
    int dup = N,rem,count=0;
    while(dup)
    {
        rem = dup%10;
        arr[count]=rem;
        dup = dup/10;
        count++;
    }

    int k=0;
    for(int j=0;j<count;j++)
    {
        int digit = arr[j];
        cnt[digit]++;
    }

    for(int i=0;i<10;i++)
    {
        if(cnt[i]>0)
        {
            k++;
        }
    }

    for(int j=0;j<10;j++)
    {
        printf("%d",cnt[j]);
    }
    printf("\n");
    if(k==2)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }


    return 0;
}
