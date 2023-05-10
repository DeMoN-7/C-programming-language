#include<stdio.h>
void main()
{
    int a=500,x,z;
    for (int i=100;i<a;i++)
    {
        x=i;
        int sum=0;
        {
            while(x)
            {
                z=x%10;
                sum=sum+(z*z*z);
                x=x/10;
            }

        }
        if(i==sum)
            {
                printf("%d ",sum);
            }
    }
}
