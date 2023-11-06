#include<stdio.h>

int main()
{
    int number, original_num, reversed_num =0, remainder;

    printf("Enter number: ");
    scanf("%d",&number);

    original_num = number;

    while(number!=0)
    {
        remainder = number%10;
        reversed_num = reversed_num*10 + remainder;
        number = number/10;
    }

    if(original_num==reversed_num)
        printf("%d is a palindrome.\n",original_num);
    else
        printf("%d is not a palindrome.\n",original_num);

    return 0;
}
