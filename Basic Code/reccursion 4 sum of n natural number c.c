#include<stdio.h>
int sum(int n);
void main()
{
    int n;
    scanf("%d",&n);
    int c=sum(n);
    printf("%d",c);
}
int sum(int n)
{

    if (n==0)
    return 0;
return n+sum(n-1);
}
