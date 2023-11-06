#include<stdio.h>
#include<string.h>

int main()
{
    char S[]="H-";
    printf("%d",minwatertanks(s});
    return 0;
}

int minwatertanks(char *S)
{
    int N=strlen(S);
    int tanks=0,i=0;

    for(int i=0;i<N-1;i++)
    {
        if(S[i]=='-')
        {
            if(S[i+1]=='H')
            {
                tanks++:
            }
        }
        else if(S[i]=='H')
        {
            if(S[i+1]=='-')
            {
                tanks++;
            }
        }

    }
}
