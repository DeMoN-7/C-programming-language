#include<stdio.h>
void main()
{
    int a=10;
    int *p=&a;
    int *x=&a;
    printf("%d\n",p);
    p=p+2;
    printf("%d\n",p);
    printf("%d\n",x);
    printf("%d",p-x);
}
