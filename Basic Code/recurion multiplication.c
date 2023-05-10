#include<stdio.h>
int sum(int n,int x)
{
    if (x<11)
    {
        printf("%d\n",n*x);
        return sum(n,x+1);
    }
}
void main()
{
    int x=sum(5,1);
}
