#include<stdio.h>
int fib(int n);
void main()
{
    int a=0,b=1,n;
    printf("enter the limit");
    scanf("%d",&n);
    int w=fib(5);
    printf("%d",w);

}
int fib(int n)
{
    int x=0,q=1,w=1,temp=0;
    if (w<n)
    {
        return fib(n)=fib(n-1)+fib(n-2);
    }
}
