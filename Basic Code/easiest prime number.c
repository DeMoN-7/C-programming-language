#include<stdio.h>
void main()
{
    int a,c=0;
    printf("enter the number");
    scanf("%d",&a);
    for (int i=2;i<a;i++)
    {
        if (a%i==0)
        {
            c=1;
            break;
        }
    }
    if (c==1)
    {
        printf("it is not prime");
    }
    else
    {
        printf("it is prime");
    }
}
