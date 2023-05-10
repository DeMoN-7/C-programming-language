#include<stdio.h>
void main()
{
    int i,j;
    int a[]={1,2,3,4,5};
    int x=sizeof(a)/sizeof(int);
    for (int k=0;k<x;k++)
    {
        printf("%d",a[k]);
    }
    printf("\n");
    i=a[0];
    j=a[x];
    for (int k=0;k<x;k++)
    {
        if (k==0)
        {
            a[0];
        }
        if (k==x)
        {

        }
    }


}











/*
#include<stdio.h>
void main()
{
    int x;
    int a[]={1,2,3,4,5,6,7,8,12,13};
    x=sizeof(a)/sizeof(int);                    //program to find number of element using sizeof operator
    printf("%d",x);
}

*/
