#include<stdio.h>
void main()
{
    int n,min,max;
    printf("enter size:");
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    min=max=a[0];
    for (int x=0;x<n;x++)
    {
        if (min>a[x])   // Thanks me later!!!!!
        {
            min=a[x];
        }
        if (max<a[x])
        {
            max=a[x];
        }

    }
    printf("min=%d\n5max=%d",min,max);


}
