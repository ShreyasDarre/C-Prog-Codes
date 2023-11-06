//Print array and size

/*#include<stdio.h>
int main()
{
int myNum[]={1,3,4,5,6};
int i,num;

for(i=0;i<5;i++)
{
    printf("%d\n",myNum[i]);
}
num=sizeof(myNum)/sizeof(myNum[0]);
printf("Number of elements in myNum is %d",num);
return 0;
}
*/


//Multidimensional array

#include<stdio.h>

int main()
{
    int matrix[2][3]={{1,4,2},{3,4,5}};
    int i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\n",matrix[i][j]);
        }
    }
    return 0;
}
