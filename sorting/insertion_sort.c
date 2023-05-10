//insertion sort
#include<stdio.h>
void sort(int *a,int n)
{
    int key,j;
    for (int i=0;i<n;i++)
    {
        key=a[i];
        j=i-1;
        while (j>=0 && a[j]>key)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
        
    }
}
void main()
{
    int n;
    printf("enter the size");
    scanf("%d",&n);

    int a[n];

    for (int i=0;i<n;i++)
    {
        printf("enter the %d element",i+1);
        scanf("%d",&a[i]);
    }

    printf("\nArray Before Sorting\n");

    for (int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    sort(a,n);
    printf("\nArray After Sorting\n");

    for (int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}



/*
#include<stdio.h>

void main()
{
    int n,key,j;
    printf("enter the size");
    scanf("%d",&n);

    int a[n];

    for (int i=0;i<n;i++)
    {
        printf("enter the %d element",i+1);
        scanf("%d",&a[i]);
    }

    printf("\nArray Before Sorting\n");

    for (int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    for (int i=0;i<n;i++)
    {
        key=a[i];
        j=i-1;
        while (j>=0 && a[j]>key)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
        
    }
    printf("\nArray After Sorting\n");

    for (int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}*/