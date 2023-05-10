#include<stdio.h>
int fact(int n);
void main()
{
    int n;
    scanf("%d",&n);
    int c=fact(n);
    printf("%d",c);
}
int fact(int n)
{
    //int x=0;
    if (n==0 || n==1)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }

}
