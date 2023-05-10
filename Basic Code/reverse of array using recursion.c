#include<stdio.h>
void rev(int a[],int n);
void main()
{
    printf("enter the size of array");
    int n;
    scanf("%d",&n);
    int a[n];
    printf("enter elements");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    rev(a,n);
}
void rev(int a[],int n)
{
    int i;
    if(n>0)
    {
        i=n-1;
        printf("%d",a[i]);
        rev(a,i);
    }
}
