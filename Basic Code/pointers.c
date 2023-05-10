#include<stdio.h>
void swap(int *a,int *b);
void main()
{
    int a=10,b=15;
    printf("a=%d,b=%d",a,b);
    swap(&a,&b);
    printf("\n a=%d,b=%d",a,b);
    swap(&a,&b);
    printf("\n a=%d,b=%d",a,b);
}
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
