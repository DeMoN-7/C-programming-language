#include<stdio.h>
void main()
{
    int limit,temp=0;
   
    printf("enter the limit of array");
    scanf("%d",&limit);

    int array[limit];
    
    for (int i=0;i<limit;i++)
    {
        printf("enter %d element of array: ",i+1);
        scanf("%d",&array[i]);
    }

//bubble sorting
    for (int z=0;z<limit-1;z++)
    {
        for (int x=0;x<limit;x++)
        {
            if (array[x]>array[x+1])
            {
                temp=array[x];
                array[x]=array[x+1];
                array[x+1]=temp;
            }
        }
    }
//displaying array
    for (int i=0;i<limit;i++)
    {
        printf("%d ",array[i]);
     
    }
}