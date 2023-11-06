//Takes something: When you mention it in main fn
//returns something

#include<stdio.h>
#include<stdio.h>

// void add(int,int); //Global Decleration
void main()
{
    int x,y;
    void add(int, int);  //local decleration

    printf("Enter two numbers");
    scanf("%d%d",&x,&y);
    add(x,y);//Actual arguments : call by value
}

void add(int a, int b) //formal arguments
{
    int c;
    c=a+b;
    printf("%d is sum.",c);
}
