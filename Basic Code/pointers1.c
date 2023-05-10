#include<stdio.h>
void main()
{
    int a=20;
    int *p=&a;
    int **pt=&p;
    printf("%d",**pt);
}
