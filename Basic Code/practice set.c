#include<stdio.h>
int avg(int a, int b,int c);
void main()
{
    int a,b,c,d;
    scanf("%d %d %d",&a,&b,&c);
    d=avg(a,b,c);
    printf("%d",d);
}
int avg(int a, int b, int c)
{
    int z=(a+b+c)/3;
    return z;
}
