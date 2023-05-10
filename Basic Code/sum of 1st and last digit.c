//program to print sum of 1st and last digit
#include<stdio.h>
void main()
{
    int i,m,x;
    scanf("%d",&i);
    x=i%10;
    while(i>0)
    {
         m=i%10;
        i=i/10;
    }
    m=m%10;
    printf("%d ",m+x);

}
