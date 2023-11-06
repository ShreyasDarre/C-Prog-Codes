#include<stdio.h>

int main()
{
    printf("Lets learn abt pointers\n");

    int a=99;
    int *ptra = &a;
    int *ptr2;
    int *ptr3=NULL;
    printf("The address of ptra to a is %d\n",&ptra);
    printf("The value of a is %d\n",a);
    printf("The address of ptra to a in hex is %x\n",ptra); // x is address in hexadecimal
    printf("The address of ptra to a is %p\n",ptra); // p is address in pointer
    printf("The address of ptr2 some garbage is %p\n",ptr2);
    printf("The address of ptr3 after initiating it to NULL is %p\n",ptr3);

    char text[] = "Hello, world!";
    char *str = &text;  // Making str point to the same memory location as text
    int count=0;
    while(*(str++)!='\0')
        count++;

    printf("The string length of %s is : %d\n",text,count);
    return 0;

}
