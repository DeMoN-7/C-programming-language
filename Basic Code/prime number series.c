#include<stdio.h>
void main()
{
    int a,c=0;
    printf("enter the limit");
    scanf("%d",&a);
    for (int k=1; k<=a; k++)
    {

        for (int i=2; i<k; i++)
        {
            c=0;
            if (k%i==0)
            {
                c=1;
                break;
            }
        }
        if (c!=1)
        {
            printf("%d ",k);
        }
    }
}
