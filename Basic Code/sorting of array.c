#include<stdio.h>
void main()
{
    str a[5]={'ayush','singh','ert'},temp=0;
    for (int i=0;i<5;i++)
    {
        for (int j=i+1;j<5;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for (int i=0;i<5;i++)
    {
        printf("%s",a[i]);
    }

}
