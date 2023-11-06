#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct recipe
{
int year;
char id[10];
char ct[200];
struct recipe *next;
struct recipe *prev;
};

typedef struct recipe *NODE;

NODE getnode()
{
NODE *p;
p=(NODE*)malloc(struct recipe);
if(p==NULL)
{

}
}
