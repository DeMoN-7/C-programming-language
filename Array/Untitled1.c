#include<stdio.h>
void main()
{
    int n;
    int sum=0;
    printf("enter the size of array");
    scanf("%d",&n);
    int array[n];
    for (int i=0;i<n;i++)
    {
        printf("enter the value of %d element",i+1);
        scanf("%d",&array[i]);
        sum=sum+array[i];
    }
    int x=sum/n;
    printf("%d",x);



}
