#include<stdio.h>
void main()
{
    char a[10]={'a','q','w','b','e','c','s','z','y','x'},temp;
    for (int i=0;i<10;i++)
    {
        for (int j=0;j<10;j++)
        {
            if (a[j]>a[i])
            {
                temp=a[i];
                a[j]=temp;
                a[i]=a[j];
            }
        }
    }
    for (int i=0;i<10;i++)
    {
        printf("%c",a[i]);
    }
}
