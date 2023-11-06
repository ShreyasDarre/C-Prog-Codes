#include<stdio.h>

#define Size 100


int main()
{
    int source[Size],destination[Size];
    int size,i;

    int *sptr = source;
    int *dptr = destination;

    int *endptr;

    printf("Enter size of array\n");
    scanf("%d",&size);

    printf("Enter elements\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",(sptr+i));
    }
    endptr = &source[size-1];


    printf("\nSource array bf cpy:\n");
    for(i=0;i<size;i++)
    {
        printf("%d\n",*(sptr+i));
    }
    printf("\nDestination array bf cpy:\n");
    for(i=0;i<size;i++)
    {
        printf("%d\n",*(dptr+i));
    }

    while(sptr<=endptr)
    {
        *dptr=*sptr;
        sptr++;
        dptr++;
    }

    sptr = source;
    dptr = destination;

    printf("\nSource array af cpy:\n");
    for(i=0;i<size;i++)
    {
        printf("%d\n",*(sptr+i));
    }
    printf("\nDestination array af cpy:\n");
    for(i=0;i<size;i++)
    {
        printf("%d\n",*(dptr+i));
    }

}
