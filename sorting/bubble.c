#include<stdio.h>
void main()
{
    int i=0,x,l=6;
    int temp=0;
    int a[6]={7,11,9,2,17,4};
   for (int k=0;k<5;k++)
   {
       i=0;
       x=l-k;
    while(x!=0)
    {
        if(a[i]>a[i+1])
        {
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
        x--;
        i++;
        
    }
    
   }
    for (int z=0;z<6;z++)
    {
        printf("%d  ",a[z]);
    }
}