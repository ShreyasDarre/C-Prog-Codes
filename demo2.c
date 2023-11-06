#include <stdio.h>

// Function prototype
int sum(int N);

int main()
{
    int N, s = 0;
    printf("Enter N: ");
    scanf("%d", &N);

    s = sum(N);
    printf("Sum of the digits of %d is %d\n", N, s);

    return 0;
}

int sum(int N)
{
    if (N == 0)
        return 0;

    return N % 10 + sum(N / 10);
}
